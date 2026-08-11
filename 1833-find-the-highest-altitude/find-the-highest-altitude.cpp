class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum = 0;
        int ans = 0;
        for(int val : gain){
            sum += val;
            ans = max(sum, ans);
        }
        return ans;
    }
};