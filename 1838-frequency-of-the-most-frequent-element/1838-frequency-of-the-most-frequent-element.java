class Solution {
    public int maxFrequency(int[] nums, int k) {
                Arrays.sort(nums);
        int left = 0, right;
        long total = 0;
        int maxCount = 1;

        for (right = 0; right < nums.length; right++) {
            total += nums[right];
            while ((long)nums[right] * (right - left + 1) - total > k) {
                total -= nums[left];
                left++;
            }
            maxCount = Math.max(maxCount, right - left + 1);
        }

        return maxCount;

    }
}