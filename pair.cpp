#include<iostream>
#include<utility>

using namespace std;

main()
{
	pair<int,pair<int,int> > t;
	t=make_pair(1,make_pair(2,3));
	cout<<t.first<<" "<<endl;

}
