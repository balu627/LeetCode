#include<bits/stdc++.h>
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        for(int i=1;i<intervals.size();i++)
        {
        if(intervals[i-1][1]>=intervals[i][0])
        {
            int first = min(intervals[i-1][0],intervals[i][0]);
            int second = max(intervals[i-1][1],intervals[i][1]);
                intervals[i-1][0] = first;
                intervals[i-1][1] = second;
                intervals.erase(intervals.begin()+i);
                i--;
        }
        }
        return intervals;
    }
};