#include<iostream>
#include<map>
#include<set>
#include<vector>


using namespace std;

  struct Point {
      int x;
     int y;
      Point() : x(0), y(0) {}
      Point(int a, int b) : x(a), y(b) {}
      bool operator==(const Point&other)const
      { return x==other.x && y==other.y;}
	bool operator<(const Point&other)const
      { return x<other.x ;}
  };

class line
{
public:
    Point a;
    Point b;
    bool operator<(const line&other)const
    {
        return! ( ((a.x-b.x)*(other.a.y-other.b.y)==(a.y-b.y)*(other.a.x-other.b.x)) && 
        (
            (a.x-b.x)*(other.b.x*other.a.y-other.a.x*other.b.y)==
            (other.a.x-other.b.x)*(b.x*a.y-a.x*b.y))
        );
    }
    bool operator==(const line&other)const
    {
        return ((a.x-b.x)*(other.a.y-other.b.y)==(a.y-b.y)*(other.a.x-other.b.x)) && 
        (
            (a.x-b.x)*(other.b.x*other.a.y-other.a.x*other.b.y)==
            (other.a.x-other.b.x)*(b.x*a.y-a.x*b.y)
        );
    }
    line(Point x,Point y):a(x),b(y){}
};
 
class Solution {
public:
    
    int maxPoints(vector<Point> &points) {
        // IMPORTANT: Please reset any member data you declared, as
        // the same Solution instance will be reused for each test case.
        map<line,set<int> > lines;
        for(int i=0;i<points.size();i++)
        {
            for(int j=i+1;j<points.size();j++)
            {
                line l(points[i],points[j]);
                if(lines.find(l)==lines.end())
                    lines[l]=set<int>();
                lines[l].insert(i);
                lines[l].insert(j);
		cout<<lines.size()<<endl;
            }
        }
        int most=points.size()>0;
        for(map<line,set<int> >::iterator it=lines.begin();it!=lines.end();it++)
            most=(int)it->second.size();
        return most;
    }
};

main()
{
	vector<Point> p(2,Point(0,0));
	cout<<Solution().maxPoints(p)<<endl;
}
