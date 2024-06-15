#include<bits/stdc++.h>
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ref = strs[0];
        int maxi = INT_MAX;
        for(int i=1;i<strs.size();i++){
            int count =0;
            int sit =0;
            for(int j=0;j<strs[i].size();j++){
                if(strs[i][j]!=ref[sit++])
                {
                    break;
                }
                count++;
            }
            maxi = min(maxi,count);
        }
        return (ref.substr(0,maxi));
    }
};