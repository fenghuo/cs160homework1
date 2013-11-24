#include<iostream>
#include<string>
#include<sstream>

using namespace std;

string f(string s)
{
	string code="";
	int i=0;
	while(i<s.length())
	{
		int sum=1;
		char t=s[i];
		int j=i+1;
		for(j=i+1;j<s.length();j++)
			if(s[j]==t)
				sum++;
			else
				break;
		i=j;
		ostringstream con;
		con<<sum;
		code+=con.str()+t;
		cout<<code<<endl;
	}
	return code;

}

main()
{
	cout<<f("aaavvvvdfddee")<<endl;
}
