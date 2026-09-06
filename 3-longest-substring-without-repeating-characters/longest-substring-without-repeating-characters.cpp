class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> st;
        if (s.size() == 0 || s.size() == 1)
            return s.size();
        int size = 0;
        int l = 0, r = 0;
        while (r < s.size()) {
            if (st.find(s[r]) == st.end()) {
                st.insert(s[r]);
                size = max(size, r - l + 1);
                r++;
            } else {
                st.erase(s[l]);
                l++;
            }
        }
        return size;
    }
};