class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count =0;
        int num =0;
        for(int i=0;i<nums.size();i++)
        {
            if(num != nums[i])
            {
                if(count==0)
                {
                    count =1;
                    num = nums[i];
                }
                else{
                    count--;
                }
            }
            else{
                count++;
            }
        }
        return num;
    }
};