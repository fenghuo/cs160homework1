#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void swap(int*arr,int i,int j)
{
	int t=arr[i];
	arr[i]=arr[j];
	arr[j]=t;	
}

void f(int* arr,int n,int k)
{
	k--;
	sort(arr,arr+n);
	vector<int> p(n+1,1);
	for(int i=1;i<=n;i++)
		p[i]=p[i-1]*i;
	for(int i=1;i<=n;i++)
	{
		int j=k/p[n-i];
		k=k%p[n-i];
		swap(arr,i-1,i-1+j);
		if(i<n && j>0)
			swap(arr,i,i-1+j);
		cout<<arr[i-1]<<" ";
	}
	cout<<endl;
}

main()
{
	int arr[]={1,2,3,4,5,6,7};
	int k;
	while(cin>>k)
		f(arr,7,k);

}
