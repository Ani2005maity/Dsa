class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int mxwt = 0;
        int ht, wt;
        int l = 0, r = n-1;
        while(l < r){
            wt = r - l;
            ht = min(height[l], height[r]);
            int ans  = wt * ht;
            mxwt = max(mxwt , ans);
            if(height[l] > height[r]) r--;
            else l++;
        }
        return mxwt;
    }
};