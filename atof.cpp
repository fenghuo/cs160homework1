#include<iostream>
#include<string>

using namespace std;

double f(string num)
{
	if(num.length()<1)
		return 0;
	int i=0;
	double result=0;
	bool deci=true;
	int base=0;
	while(i<num.length() && num[i]!='E')
	{
		if(num[i]=='.')
			deci=false;
		else
		{
			result=result*10+num[i]-'0';
			if(!deci)
				base++;
		}
		i++;
	}
	if(!deci)
		base=-base;
	int base2=0;
	bool positive=true;
	i++;
	while(i<num.length())
	{
		if(num[i]=='-')
		{
			positive=false;
		}
		else
		{
			base2=base2*10+num[i]-'0';
		}
		i++;
	}
	if(!positive)
		base2=-base2;
	base+=base2;
	positive=base>=0;
	if(base<0)base=-base;
	double radix=1;
		while(base>0)
		{
			radix*=10;
			base--;
		}
	cout<<base2<<" "<<radix<<" "<<result<<endl;
	if(positive)
		result*=radix;
	else
		result/=radix;
	return result;
}

main()
{

	cout<<f("3.23E-12")<<endl;
}
