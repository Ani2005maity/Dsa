class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int msum = nums[0];
        int tsum = 0;
        for(int i = 0; i < nums.size(); i++){
            tsum += nums[i];
            msum = max(msum, tsum);
            if(tsum < 0){
                tsum = 0;
            }
        }
        return msum;
    }
};