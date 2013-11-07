#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>

#include "utility.cpp"
#include "6.1.cpp"
#include "6.7.cpp"

using namespace std;

main()
{
	int arr []={5,2,3,4,2,1,5,6,5,9,6,5,1,3,4};
	int n=15;
	output(arr,n);
	cout<<f67(arr,n)<<endl;	
	//f61(arr,n);
	output(arr,n);
}
