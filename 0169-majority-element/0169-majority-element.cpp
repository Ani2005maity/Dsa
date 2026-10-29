class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }
        int ans = nums[0];
        int frq = 0;
        for(auto val : mp){
            if(val.second > frq){
                frq = val.second;
                ans = val.first;
            }
        }
        return ans;
    }
};