class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>temp(nums.size(),0);
        int p = 0;
        int n = 1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
            {
                temp[n] = nums[i];
                n = n+2;
            }
            else{
                temp[p] = nums[i];
                p = p+2;
            }
        }
        return temp;
    }
};