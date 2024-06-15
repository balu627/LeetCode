class Solution {
public:
    int myAtoi(string s) {
        int i =0;
        while(s[i]==' '){
            i++;
        }
        int sign =1;
        if((s[i]=='+' || s[i]=='-'))
        {
            if(s[i]=='-'){
                sign*=-1;
            }
            i++;
        }
        long long sum =0;
        if(isdigit(s[i])){
            while(isdigit(s[i])){
                sum = sum*10 + (long)(s[i]-'0');
                if((sum*sign)<pow(-2,31))
                {
                    return INT_MIN;
                }
                if(sum*sign>(pow(2,31)-1)){
                    return INT_MAX;
                }
                i++;
            }
        }  
        sum*=sign;
        return (int)sum;
    }
};