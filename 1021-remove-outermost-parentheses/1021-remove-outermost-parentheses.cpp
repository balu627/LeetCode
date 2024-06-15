class Solution {
public:
    string removeOuterParentheses(string s) {
        string str ="";
        int count =0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                count++;
            }
            else if(s[i]==')'){
                count--;
            }
            if(count>1 && s[i]=='('){
                str+=s[i];
            }
            else if(count>=1 && s[i]==')'){
                str+=s[i];
            }
        }
        return str;
    }
};