class Solution {
public:
    int jump(vector<int>& nums) {
        int des  =0;
        int current  =0;
        int jump = 0;
        if(nums.size()==1)
        {
            return 0;
        }
        for(int i=0;i<nums.size();i++)
        {
            des = max(des,nums[i]+i);
            if(current == i)
            {
                current  = des;
                jump++;
            }
            if(current >= nums.size()-1)
            {
                return jump;
            }
        }
        return -1;
    }
};