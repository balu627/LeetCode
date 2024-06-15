class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mpp;
        string ans ="";
        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
        }
        int len = mpp.size();
        while(!mpp.empty()){
            int maxi = INT_MIN;
            char mval;
            for(auto it:mpp){
                if(maxi<it.second){
                    maxi = it.second;
                    mval = it.first;
                }
            }
            for(int i=0;i<maxi;i++)
            {
                ans+=mval;
            }

            mpp.erase(mval);
        }
        return ans;
    }
};