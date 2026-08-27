class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int n1 = word1.size();
        int n2 = word2.size();

        if (n1 != n2)
            return false;

        unordered_map<int, int> mp1;
        unordered_map<int, int> mp2;

        for (auto& a : word1) {
            mp1[a]++;
        }
        for (auto& a : word2) {
            mp2[a]++;
        }
        vector<int> v1, v2;

        if (mp1.size() != mp2.size())
            return false;

        for (auto [val, freq] : mp1) {
            if (mp2.find(val) == mp2.end()) {
                return false;
            }

            v1.push_back(freq);
        }

        for (auto [val, freq] : mp2) {
            v2.push_back(freq);
        }

        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());

        return v1 == v2;
        return false;
    }
};