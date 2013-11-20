#include<iostream>
#include<cmath>
using namespace std;

float f(float r,float base,float s,float e)
{
	if(base<0.0001)
		return s;
	float z=0;
	while(s-e<0.000001)
	{
		float mid=(s+e)/2;
		int temp=(mid/base);
		mid=temp*base;
		if(mid*mid>r)
			e=mid-base;
		else if( (mid+base)*(mid+base)<=r)
			s=mid+base;
		else
		{
			z=mid;
			break;
		} 
	}
	return f(r,base/10,z,z+base);
}

float f(float r)
{
	return f(r,1,0,r);
}

main()
{
	float t;
	while(cin>>t)
	{
		cout<<f(t)<<endl;
		cout<<sqrt(t)<<endl;
	}
}
