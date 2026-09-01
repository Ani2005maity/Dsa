class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp;
        vector<int> ans;
        if(nums1.size() >= nums2.size()){
            for(int val : nums1){
                mp[val]++;
            }
            for(int val : nums2){
                if(mp.find(val) != mp.end()){
                    ans.push_back(val);
                    mp.erase(val);
                }
            }
        } else {
            for(int val : nums2){
                mp[val]++;
            }
            for(int val : nums1){
                if(mp.find(val) != mp.end()){
                    ans.push_back(val);
                    mp.erase(val);
                }
            }
        }
        return ans;
    }
};