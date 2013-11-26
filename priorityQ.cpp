#include<iostream>
#include<queue>

using namespace std;

class p
{
private:
	int x;
	int y;
public:
	p(int a,int b):x(a),y(b){}
	bool operator < (const p& to)
	{
		return (x*x+y*y)>(to.x*to.x+to.y*to.y);	
	}
	const void print()const
	{
		cout<<x<<" "<<y<<endl;
	}
};

main()
{
	priority_queue<p> h;
	int x,y;
	while(cin>>x>>y)
	{
		h.push(p(x,y));
		h.top().print();
	}

}
