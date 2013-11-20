#include<iostream>
#include<queue>
#include<functional>
#include<vector>

using namespace std;

class mycomparison
{
  bool reverse;
public:
  mycomparison(const bool& revparam=false)
    {reverse=revparam;}
  bool operator() (const int& lhs, const int&rhs) const
  {
    if (reverse) return (lhs>rhs);
    else return (lhs<rhs);
  }
};


main()
{
	int t;
	priority_queue<int> left;
	std::priority_queue<int, std::vector<int>, std::greater<int> > right;
	while(cin>>t)
	{
		if(right.empty() || t<right.top())
			left.push(t);
		else
			right.push(t);
		if((left.size()-right.size())>1)
		{
			right.push(left.top());
			left.pop();
		}
		else if(right.size()>left.size())
		{
			left.push(right.top());
			right.pop();
		}
		if(left.size()==right.size())
			cout<<(left.top()+right.top())/(2.0)<<endl;
		else
			cout<<left.top()<<endl;
	}
}
