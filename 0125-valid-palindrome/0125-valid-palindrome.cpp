class Solution {
public:
    bool isAlphanumeric(char ch){
        return (ch >= 97 && ch <= 122) || (ch >= 48 && ch <= 57);
    }
    bool isPalindrome(string s) {
        int n = s.length();
        int l = 0;
        int r = n-1;

        while(l<r){
            char cl = tolower(s[l]);
            char cr = tolower(s[r]);

            if (!isAlphanumeric(cl)){
                l++;
            }
            else if(!isAlphanumeric(cr)){
                r--;
            }
            else{
                if(cl != cr){
                    return false;
                }
                l++;
                r--;
            }
        }
        return true;
    }
};