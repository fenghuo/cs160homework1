#include<iostream>

using namespace std;

int f1(int*a,int n,int t)
{
	int s=0;
	int e=n-1;
	int x=-1;
	while(s<=e)
	{
		
		int mid=s+(e-s)/2;
		cout<<mid<<" - "<<a[mid]<<endl;
		if(a[mid]<t)
		{
			s=mid+1;
		}

		else if(a[mid]>t)
		{
			if(mid==0 || a[mid-1]<=t)
			{
				x=(mid);
				break;
			}
			e=mid-1;
		}
		else
			s=mid+1;
	}
	return x;
}

main()
{
	int a[]={1,1,1,3,3,3,4,5,6,7};
	cout<<f1(a,10,3);
}
