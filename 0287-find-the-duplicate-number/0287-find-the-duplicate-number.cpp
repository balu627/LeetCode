class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //my inial ans
        // map<int,int>mpp;
        // for(int i=0;i<nums.size();i++)
        // {
        //     mpp[nums[i]]++;
        //     if(mpp[nums[i]]==2)
        //     {
        //         return nums[i];
        //     }
        // }
        //binary search approch with space 1 and time Nlogn
        // int low = 1;
        // int high =  nums.size()-1;
        // while(low<=high)
        // {
        //     int mid =(low+high)/2;
        //     int count =0;
        //     for(auto it:nums)
        //     {
        //         if(it<=mid)
        //         {
        //             count++;
        //         }
        //     }
        //     if(count>mid)
        //     {
        //         high = mid-1;
        //     }
        //     else{
        //         low = mid+1;
        //     }
        // }
        // return low;
        int slow =nums[0];
        int fast = nums[0];
        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while(slow!=fast);
        slow = nums[0];
        while(slow!=fast)
        {
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};