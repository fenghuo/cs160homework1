#include<iostream>
#include<stack>
using namespace std;
void insert(stack<int>&n,int t)
{
	if(n.empty())
		n.push(t);
	else
	{
		int m=n.top();
		if(m>t)
		{
			n.pop();
			insert(n,t);
			n.push(m);
		}
		else
			n.push(t);
	}
}

void sort(stack<int>&n)
{
	if(!n.empty())
	{
		int t=n.top();
		n.pop();
		sort(n);
		insert(n,t);
	}
}

main()
{
	stack<int> n;
	n.push(4);
	n.push(2);
	n.push(8);
	n.push(6);
	n.push(1);
	n.push(3);
	sort(n);
	while(!n.empty())
	{
		cout<<n.top()<<" ";
		n.pop();
	}
	cout<<endl;
}
