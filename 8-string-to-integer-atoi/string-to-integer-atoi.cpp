class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int n = s.size();
        while (i < n && s[i] == ' ') {
            i++;
        }
        int sign = 1;
        if (i < n && s[i] == '-') {
            sign = -1;
            i++;
        }
        else if (i < n && s[i] == '+') {
            i++;
        }
        int ans = 0;
        while (i < n && isdigit(s[i])) {
            int digit = s[i] - '0';
            if (ans > INT_MAX / 10 ||
                (ans == INT_MAX / 10 && digit > 7)) {
                
                if (sign == 1)
                    return INT_MAX;
                else
                    return INT_MIN;
            }
            ans = ans * 10 + digit;
            i++;
        }
        return ans * sign;
    }
};