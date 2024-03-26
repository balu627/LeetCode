class Solution {
public:
    bool isPalindrome(int x) {
        int t = x;
        long long sum =0;
        while(t>0)
        {
            int r = t%10;
            sum = sum*10 + r;
            t = t/10;
        }
        if((int)sum == x)
        {
            return true;
        }
        return false;
    }
};