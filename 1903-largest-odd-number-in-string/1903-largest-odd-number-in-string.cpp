class Solution {
public:
    string largestOddNumber(string num) {
         int lstnum = num.length()-1;
        if(((int)(num[lstnum]))%2!=0){
            return num;
        }
        int i = lstnum;
        int maxodd = 0;
        while(i>=0){
            if((int)(num[i])%2!=0){
                return num.substr(0,i+1);
            }
            i--;
        }
        if(maxodd==0){
            return "";
        }
        return (to_string(maxodd));
    }
};