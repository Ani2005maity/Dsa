class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;

        for(int i = 0; i < n; i++) {
            unordered_set<int> seen;
            int even = 0;
            int odd = 0;

            for(int j = i; j < n; j++) {
                if(seen.find(nums[j]) == seen.end()) {
                    seen.insert(nums[j]);

                    if(nums[j] % 2 == 0)
                        even++;
                    else
                        odd++;
                }

                if(even == odd) {
                    ans = max(ans, j - i + 1);
                }
            }
        }

        return ans;
    }
};