#include<iostream>
#include<sstream>
#include<string>
#include<vector>

using namespace std;
string f69(string A,string B)
{
	if(A.length()<1 || B.length()<1)
		return "";
	if(A[0]=='-' && B[0]=='-')
		return f69(A.substr(1),B.substr(1));
	if(A[0]=='-')
		return '-'+f69(A.substr(1),B);
	if(B[0]=='-')
		return '-'+f69(A,B.substr(1));
	vector<char> result(A.length()+B.length(),'0');
	int i,j;
	int carry=0;
	for(j=B.length()-1;j>=0;j--)
	{
		for(i=A.length()-1;i>=0 || carry>0 ;i--)
		{
			int sum=carry+result[j+i+1]-'0';
			if(i>=0)
				sum+=(A[i]-'0')*(B[j]-'0');
			carry=sum/10;
			sum=sum%10;
			result[j+i+1]=sum+'0';
			cout<<i+j+1<<" "<<result[i+j+1]<<" "<<carry<<endl;
		}
	}
	string r="";
	for(i=(result[0]=='0'?1:0);i<A.length()+B.length();i++)
		r+=result[i];
	return r;
}

main()
{
	long long m=-234033;
	long long n=-340400;
	long long r=m*n;
	std::ostringstream s1,s2;
	s1<<m;s2<<n;
	cout<<f69(s1.str(),s2.str())<<endl;
	//cout<<f69("8238498028098548609568708560785690785697805678567859","89058699457658947954769547954796754675946795476954764")<<endl;
	cout<<r<<endl;
}
