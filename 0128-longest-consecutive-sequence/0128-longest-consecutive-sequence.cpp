class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
        {
            return 0;
        }
        if(nums.size()==1)
        {
            return 1;
        }
        // sort(nums.begin(),nums.end());
        int maxi =1;
        // int n = nums[0];
        // int count =1;
        // for(int i=1;i<nums.size();i++)
        // {
        //     if(n==nums[i])
        //     {
        //         continue;
        //     }
        //     else if(n+1==nums[i])
        //     {
        //         count++;
        //         n = nums[i];
        //     }
        //     else{
        //         count =1;
        //         n = nums[i];
        //     }
        //     maxi = max(maxi,count);
        // }
        unordered_set<int>sst;
            for(int i=0;i<nums.size();i++)
            {
                sst.insert(nums[i]);
            }
            for(auto it:sst)
            {
                if(sst.find(it-1)==sst.end())
                {
                    int count =1;
                    int x = it;
                    while(sst.find(x+1)!=sst.end())
                    {
                        x = x+1;
                        count++;
                    }
                    maxi = max(maxi,count);
                }
            }
    return maxi;
    }
};