class Solution {
public:
    void merge(vector<int> &arr,int low, int mid ,int high)
    {
        
        int i = low;
        int j = mid+1;
        vector<int>temp;
        while(i<=mid && j<=high)
        {
            if(arr[i]<arr[j])
            {
                temp.push_back(arr[i]);
                i++;
            }else{
                temp.push_back(arr[j]);
                j++;
            }
        }
        while(i<=mid)
        {
                temp.push_back(arr[i]);
                i++;
        }
        while(j<=high)
        {
                temp.push_back(arr[j]);
                j++;
        }
        int c =0;
        for(int k = low;k<=high;k++)
        {
            arr[k] = temp[c++];
        }
    }
    void mergesort(vector<int>&arr,int low ,int high)
    {
        if(low<high)
        {
            int mid = (low+high)/2;
            mergesort(arr,low,mid);
            mergesort(arr,mid+1,high);
            merge(arr,low,mid,high);
        }
    }
    // int quick(vector<int>&nums,int low,int high)
    // {
    //     int i = low;
    //     int j = high;
    //     int p = nums[low];
    //     while(i<j)
    //     {
    //         while(i <= high && nums[i]<=p  )
    //         {
    //             i++;
    //         }
    //         while(j>= low && nums[j]>p )
    //         {
    //             j--;
    //         }
    //         if(i<j)
    //         {
    //             swap(nums[i],nums[j]);
    //         }
    //     }
    //     if(i>j)
    //     {
    //         swap(nums[low],nums[j]);
    //     }
    //     return j;
    // }
    // void quicksort(vector<int>&nums,int low,int high)
    // {
    //     if(low<high)
    //     {
    //         int p = quick(nums,low,high);
    //         quicksort(nums,low,p-1);
    //         quicksort(nums,p+1,high);
    //     }
    // }
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        mergesort(nums,0,n-1);
        // quicksort(nums,0,n-1);
        return nums;
    }
};
