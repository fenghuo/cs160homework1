#include<iostream>
#include<vector>

using namespace std;

int com(string a,string b)
{
	if(a.length()!=b.length())
		return (a.length()>b.length()?1:-1);
	for(int i=0;i<a.length();i++)
		if(a[i]!=b[i])
			return a[i]>b[i]?1:-1;
	return 0;
}

string subtract(string a,string b)
{
	if(com(a,b)==0)
		return "0";
	else if(com(a,b)<0)
		return "-"+subtract(b,a);
	else
	{
		vector<int> result(a.length(),0) ;
		int carry=0;
		for(int i=1;i<=a.length();i++)
		{
			int x=a.length()-i;
			int y=b.length()-i;
			int val=carry+a[x]-(y>=0?b[y]:'0');
			if(val<0)
			{
				carry=-1;
				val+=10;
			}
			else
				carry=0;
			result[x]=val;
		}
		string outcome="";
		for(int i=0;i<a.length();i++)
		{
			if(outcome!="" || result[i])
				outcome+=('0'+result[i]);
		}
		if(outcome=="")
			outcome="0";
		return outcome;
	}
}

main()
{
	string a,b;
	getline(cin,a);
	getline(cin,b);
	cout<<subtract(a,b)<<endl;

}
