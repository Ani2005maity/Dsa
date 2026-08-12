class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> mp;
        unordered_set<int> st;
        for(int val : arr){
            mp[val]++;
        }
        for(auto x : mp){
            if(st.find(x.second) != st.end()) return false;

            else{
                st.insert(x.second);
            }
        }
        return true;
    }
};