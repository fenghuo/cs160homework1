#include<iostream>
#include<algorithm>

using namespace std;

bool com(int i,int j){return i>j;}

class compare
{
public:
	bool operator()(int i,int j){return i>j;}
	bool operator()(int i){return i>1;}

};
main()
{
	int*arr=new int[100];
	int n=0;
	int v;
	while(cin>>v)
	{
		arr[n++]=v;
		sort(arr,arr+n,compare());
		for(int i=0;i<n;i++)
			cout<<arr[i]<<" ";
		cout<<compare()(v,1,1)<<endl;
	}

	delete[]arr;

}
