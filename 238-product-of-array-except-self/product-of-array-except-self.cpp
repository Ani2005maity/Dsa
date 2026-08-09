class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1);
        vector<int> lp(n, 1);
        vector<int> rp(n, 1);
        for (int i = 1; i < n; i++) {
            lp[i] = lp[i - 1] * nums[i - 1];
        }
        for (int j = n - 2; j >= 0; j--) {
            rp[j] = rp[j + 1] * nums[j + 1];
        }
        for (int k = 0; k < n; k++){
            ans[k] = lp[k] * rp[k];
        }
        return ans;
    }
};