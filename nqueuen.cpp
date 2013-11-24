#include<iostream>
#include<vector>
#include<string>

using namespace std;

    bool check(vector<int>&x,vector<int>&y,int i,int j)
    {
        for(int k=0;k<x.size();k++)
        {
            if(i==x[k] || j==y[k])
                return false;
            if(x[k]+y[k]==i+j)
                return false;
            if(x[k]-y[k]==i-j)
                return false;
        }
        return true;
    }

    void f(int n,vector<vector<string> >&all,vector<int>&x,vector<int>&y,int N)
    {
        if(n==0)
        {
            string s="";
            while(s.length()<N)
                s+=".";
            all.push_back(vector<string>(N,s));
            for(int i=0;i<x.size();i++)
                all[all.size()-1][x[i]].replace(y[i],1,"Q");
        }
        else
        {
            int i=x.empty()?0:(x.back()+1);
                for(int j=0;j<N;j++)
                {
                    if(check(x,y,i,j))
                    {
			cout<<i<<" "<<j<<" "<<n<<endl;
                        x.push_back(i);
                        y.push_back(j);
                        f(n-1,all,x,y,N);
                        x.pop_back();
                        y.pop_back();
                    }
                }
        }
    }

    vector<vector<string> > solveNQueens(int n) {
        // IMPORTANT: Please reset any member data you declared, as
        // the same Solution instance will be reused for each test case.
        //21:42
        vector<vector<string> > all;
        vector<int>a;
        vector<int>b;
        f(n,all,a,b,n);
        return all;
    }

main()
{

cout<<solveNQueens(8).size()<<endl;
}
