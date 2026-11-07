class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;

        vector<int> prefixSum(n, 0);
        prefixSum[0] = nums[0];

        for(int i = 1; i < n; i++) {
            prefixSum[i] = prefixSum[i - 1] + nums[i];
        }

        unordered_map<int, int> m;
        m[0] = 1;

        for(int j = 0; j < n; j++) {
            int val = prefixSum[j] - k;

            if(m.find(val) != m.end()) {
                count += m[val];
            }

            m[prefixSum[j]]++;
        }
        return count;
    }
};