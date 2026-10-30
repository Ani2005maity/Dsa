class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int w, h;
        int l = 0, r = n - 1;
        int wt = 0;
        int cwt;
        while(l < r){
            h = min(height[l], height[r]);
            w = r - l;
            cwt = h * w;
            wt = max(cwt, wt);
            if(height[l] < height[r]){
                l++;
            } else {
                r--;
            }
        }
        return wt;
    }
};