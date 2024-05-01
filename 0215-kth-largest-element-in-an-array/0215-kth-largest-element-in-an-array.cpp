class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        map<int,int> mpp;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }
        int f = nums.size()-k;
        int count =0;
        int num = 0;
        for(auto it:mpp)
        {
            if(count>=f)
            {
                if(count>f)
                {
                    return num;
                }else{
                    return it.first;
                }
            }
            num = it.first;
            count+=it.second;
        }
        if(mpp.size()<2)
        {
            return num;
        }
        return 0;
    }
};