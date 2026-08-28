class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        for(char val : s){
            if(val == '*'){
                st.pop();
            } else {
                st.push(val);
            }
        }
        string ans = "";
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};