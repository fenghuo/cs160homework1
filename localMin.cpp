#include<iostream>

using namespace std;

int f(int*arr,int n)
{
	int s=1;
	int e=n-2;
	while(s<=e)
	{
		int mid=s+(e-s)/2;
		if(arr[mid-1]>=arr[mid] && arr[mid+1]>=arr[mid])
			return arr[mid];
		else if(arr[mid-1]<arr[mid])
			e=mid-1;
		else
			s=mid+1;
	}
}

int main()
{
	int arr[]={9,4,2,1,3,9};
	cout<<f(arr,6);
}
