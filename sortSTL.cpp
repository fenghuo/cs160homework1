#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

struct Interval {
     int start;
     int end;
     Interval() : start(0), end(0) {}
     Interval(int s, int e) : start(s), end(e) {}
};

    bool com(Interval a,Interval b)
    {
        if(a.start<b.start)
            return true;
        else if(a.start==b.start && a.end<=b.end)
            return true;
        else
            return false;
    }
    
    vector<Interval> merge(vector<Interval> &intervals) {
        // Note: The Solution object is instantiated only once and is reused by each test case.
        sort(intervals.begin(),intervals.end(),com);
        return intervals;
    }

main()
{
	vector<Interval> intervals(10,Interval(2,5));
	merge(intervals);
}
