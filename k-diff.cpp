#include<iostream>

using namespace std;

void f(int* arr,int n,int k)
{
	int*brr=new int[n];
	for(int i=0;i<n;i++)
		brr[n-i-1]=-arr[i];
	int i=0;
	int j=n-1;
	while(i<n && j>=0)
	{
		int sum=(brr[i]+arr[j]);
		if(sum==k)
		{
			cout<<(-brr[i])<<" "<<arr[j]<<endl;
			i++;j--;
		}
		else if(sum<k)
			i++;
		else
			j--;
	}
}

main()
{
	int arr[]={1,3,4,6,7,9,11,12};
	f(arr,8,-2);

}
