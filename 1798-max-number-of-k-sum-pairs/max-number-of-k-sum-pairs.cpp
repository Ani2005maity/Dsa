class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int count = 0;
        int l = 0;
        int r = nums.size() - 1;
        while(l < r){
            int sum = nums[l] + nums[r];
            if(sum == k){
                count += 1;
                l ++;
                r --;
            }
            else if(sum > k) r--;
            
            else l++;
        }
        return count;
    }
};