class Solution {
public:
    bool check(vector<int>& nums) {
        if(nums.size()<=2)
        {
            return true;
        }
        int i = 1;
        int mnum = nums[i-1];
        while( i<nums.size() && nums[i]>=nums[i-1])
        {
            i++;
        }
        if(i != nums.size())
        {
            int num = nums[i-1];
            if(i==nums.size()-1)
            {
                if(nums[i]>num || nums[i]>mnum)
                {
                    return false;
                }
            }
            else{
                i = i+1;
                while(i<nums.size() && nums[i]<=num && nums[i]<=mnum && nums[i]>=nums[i-1])
                {
                    i++;
                }
                if(i!=nums.size())
                {
                    return false;
                }
            }
        }
        return true;
    }
};