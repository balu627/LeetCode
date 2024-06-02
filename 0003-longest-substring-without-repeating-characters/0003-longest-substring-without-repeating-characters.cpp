class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==1)
        {
            return 1;
        }
        int i=0;
        int j = 0;
        int maxi =0;
        map<char,int>mpp;
        while(j<s.size())
        {
            if(mpp.find(s[j])!=mpp.end())
            {
                i++;
                int len = mpp.size();
                maxi = max(maxi,len);
                j = i;
                mpp.clear();
            }
            else{
                mpp[s[j]]++;
                j++;
            }
        }
        int len = mpp.size();
        maxi = max(maxi,len);
        return maxi;
    }
};