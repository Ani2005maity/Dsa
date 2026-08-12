class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int totalsum = 0;
        int leftsum = 0;

        for(int i = 0; i < n; i++){
            totalsum += nums[i];
        }

        for(int i = 0; i < n; i++){
            int rightsum = totalsum - nums[i] - leftsum;
            if(leftsum == rightsum) return i;
            leftsum += nums[i];
        }
        return -1;
    }
};