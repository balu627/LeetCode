class Solution {
public:
    string reverseWords(string s) {
        string temp ="";
        string ans ="";
        int si= s.length()-1;
        while(s[si]==' '){
            si--;
        }
        int ei =0;
        while(s[ei]==' '){
            ei++;
        }
        for(int i=si;i>=ei;i--){
            if(s[i]==' '){
                temp+=s[i];
                ans+=temp;
                temp="";
                while(s[i]==' '){
                    i--;
                }
                if(i>=0)
                {
                    i+=1;
                }
            }
            else{
                temp=s[i]+temp;
            }
        }
        ans += temp;
        return ans;
    }
};