#include<iostream>
#include<queue>
#include<deque>

using namespace std;

class maxQ
{
private:
	queue<int> val;
	deque<int> maxV;
public:
	void en(int v)
	{
		val.push(v);
		if(maxV.empty())
			maxV.push_back(v);
		else
		{
			while(!maxV.empty() && maxV.back()<v)
				maxV.pop_back();
			maxV.push_back(v);
		}
	}
	void de()
	{
		if(!val.empty())
		{
			if(maxV.front()==val.front())
				maxV.pop_front();
			val.pop();
		}
	}
	void max()
	{
		if(!val.empty())
			cout<<maxV.front()<<endl;
	}

};

main()
{
	maxQ t;
	int v;
	while(cin>>v)
	{
		if(v<0)
			t.de();
		else
			t.en(v);
		t.max();
	}
}
