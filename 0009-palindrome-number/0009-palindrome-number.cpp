class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            {
                return false;
            }
        int n = x;
        long int s=0;
        while(n!=0)
        {
            int r = n%10;
            n = n/10;
            s = s*10+r;
        }
        if(x == s)
        {
            cout<<s<<endl;
            return true;
        }
        else{
            return false;
        }
       
    }
    
};