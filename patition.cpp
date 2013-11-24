#include<iostream>

using namespace std;

void swap(int*arr,int i,int j)
{
	int t=arr[i];
	arr[i]=arr[j];
	arr[j]=t;
}

void f(int * arr,int n)
{
	if(n<=1)
		return;
	int t=arr[0];
	int less=0;
	int equal=1;
	for(int i=1;i<n;i++)
	{
		if(arr[i]<t)
		{
			swap(arr,less++,i);
			swap(arr,equal++,i);	
		}
		else if(arr[i]==t)
		{
		swap(arr,equal++,i);
		}
	}
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}

main()
{
	int arr[]={4,5,4,4,3,4,7,8,1};
	f(arr,9);
}
