class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int msum = nums[0];
        int csum = 0;
        for(int i = 0; i < nums.size(); i++){
            csum += nums[i];
            msum = max(csum, msum);
            if(csum < 0){
                csum = 0;
            }
        }
        return msum;
    }
};