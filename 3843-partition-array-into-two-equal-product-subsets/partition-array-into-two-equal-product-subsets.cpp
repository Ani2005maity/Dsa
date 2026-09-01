class Solution {
public:
    bool checkEqualPartitions(vector<int>& nums, long long target) {
        int n = nums.size();
        for (int mask = 1; mask < (1 << n) - 1; mask++) {
            long long product1 = 1;
            long long product2 = 1;

            for (int i = 0; i < n; i++) {
                if (mask & (1 << i)) {
                    product1 *= nums[i];
                } else {
                    product2 *= nums[i];
                }
                if (product1 > target || product2 > target)
                    break;
            }

            if (product1 == target && product2 == target) {
                return true;
            }
        }

        return false;
    }
};