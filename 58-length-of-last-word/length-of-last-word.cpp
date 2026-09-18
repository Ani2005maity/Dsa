class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans = 0;
        int count = 0;
        if(s.size() == 0 || s.size() == 1) return s.size();
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ' '){
                if(count > 0){
                    ans = count;
                }
                count = 0;
            }else{
                count++;
            }
        }
        return count == 0 ? ans : count;
    }
};