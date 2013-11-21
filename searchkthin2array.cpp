//20:13
#include<iostream>

using namespace std;

int f(int*a,int n,int *b,int m,int k)
{
	int s=0;
	int e=min(k,n)-1;
	while(s<=e)
	{
		int mid=s+(e-s)/2;
		int j=(k-mid-1);
		if(j<0)
			e=mid-1;
		else if(j==0)
		{
			if(b[0]>=a[mid])
				return mid;
			else
				e=mid-1;
		}
		else if(j>m)
			s=mid+1;
		else
		{
			if(b[j-1]<=a[mid] && b[j]>=a[mid])
				return mid;
			else if(b[j-1]>a[mid])
				s=mid+1;
			else
				e=mid-1;
		}
	}
	return -1;
}

int ff(int*a,int n,int *b,int m,int k)
{
	if(k<=0 || k>m+n)
		return -1;
	else
	{
		int t=f(a,n,b,m,k);
		if(t<0)
			return b[f(b,m,a,n,k)];
		else
			return a[t];
	}
}

main()
{
	int a[]={1,3,5,7,9};
	int b[]={0,2,4,6,8};
	int k;
	while(cin>>k)
		cout<<ff(a,5,b,5,k)<<endl;

}
