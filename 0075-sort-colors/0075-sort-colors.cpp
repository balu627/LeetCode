class Solution {
public:
    void sortColors(vector<int>& nums) {
        // for(int i=0;i<nums.size();i++)
        // {
        //     for(int j=0;j<nums.size()-i-1;j++)
        //     {
        //         if(nums[j]>nums[j+1])
        //         {
        //             swap(nums[j],nums[j+1]);
        //         }
        //     }
        // }
//         for(int i=1;i<nums.size();i++)
//         {
//             int j=i;
//             while(j>0 && nums[j-1]>nums[j] )
//             {
//                 swap(nums[j-1],nums[j]);
//                 j--;
//             }
            
//         }
        for(int i = 0;i<nums.size();i++)
        {
            int j = i+1;
            int mini = nums[i];
            int idx = i;
            while(j<nums.size())
            {
                if(nums[j]<mini)
                {
                    mini = nums[j];
                    idx = j;
                }
                j++;
            }
            swap(nums[idx],nums[i]);
        }
    }
};