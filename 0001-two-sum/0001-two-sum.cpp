class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mpp;
        for(int i=0;i<nums.size();i++)
        {
            int rem = target-nums[i];
            if(mpp.find(rem)!=mpp.end())
            {
                int idx = mpp[rem];
                return {idx,i};
            }
            if(mpp.find(nums[i])==mpp.end())
            {
                mpp[nums[i]]= i;
            }
        }
        return {0,0};
    }
};