#include<iostream>

using namespace std;

class queue
{
private:
	long value;
	long base;
public:
	queue()
	{
		value=0;
		base=1;
	}
	void enqueue(int n)
	{
		if(n<0 || n>9)
			return;
		value=value*10+n;
		base*=10;
	}
	void dequeue()
	{
		if(base==1)
			return;
		else
		{
			base/=10;
			value=value%(base);
		}
	}	
	int front()
	{
		return value/base;
	}
	
	void print()
	{
		cout<<value<<endl;
	}
};

int main()
{
	queue q;
	int t;
	while(cin>>t)
	{
		q.enqueue(t);
		q.print();
	}
	return 0;
}

