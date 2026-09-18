class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int, int> mp;
        for(int val : nums){
            mp[val]++;
        }
        for(int i = 0; i < mp.size(); i++){
            if(mp[nums[i]] > 1){
                return nums[i];
            }
        }
        return 0;
    }
};