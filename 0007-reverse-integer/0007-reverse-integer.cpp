class Solution {
public:
    int reverse(int x) {
        int m;
        long int s=0;
        if(x<0)
        {
           while(x!=0)
           {
               m = x%10;
               x = x/10;
               s = s*10+m;
           }
        }
        else
        {
            while(x!=0)
           {
               m = x%10;
               x = x/10;
               s = s*10+m;
           }
        }
        if(s > INT_MAX || s < INT_MIN)
        {
            return 0;
        }
        return s;
    }
};