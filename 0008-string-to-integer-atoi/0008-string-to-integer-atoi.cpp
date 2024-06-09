class Solution {
public:
    int myAtoi(string s) {
        long long sum = 0;
        int i = 0;
        int sign = 1;

        while (i < s.length() && s[i] == ' ') {
            i++;
        }

        if (i < s.length() && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        while (i < s.length() && isdigit(s[i])) {
            int num = s[i] - '0';
            sum = sum * 10 + num;

            if (sum * sign >= INT_MAX) {
                return INT_MAX;
            }
            if (sum * sign <= INT_MIN) {
                return INT_MIN;
            }

            i++;
        }

        return (int)(sum * sign);
    }
};
