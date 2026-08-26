class Solution {
public:
    int compress(vector<char>& chars) {
        vector<pair<char, int>> groups;
        int i = 0;
        while (i < chars.size()) {
            char val = chars[i];
            int freq = 0;
            while (i < chars.size() && chars[i] == val) {
                freq++;
                i++;
            }
            groups.push_back({val, freq});
        }
        string s = "";
        for (auto [val, freq] : groups) {
            s += val;
            if (freq > 1) {
                s += to_string(freq);
            }
        }
        for (int i = 0; i < s.size(); i++) {
            chars[i] = s[i];
        }
        return s.size();
    }
};