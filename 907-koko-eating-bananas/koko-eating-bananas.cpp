class Solution {
public:
    int canEate(vector<int>& piles, int h, int mid){
        long long hour = 0;
        for(int pile : piles){
            hour += (pile + mid - 1) / mid;
        }
        return hour <= h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = 0;
        for(int pile : piles){
            r = max(r, pile);
        }

        while(l < r){
            int mid = l + (r - l) / 2;
            if(canEate(piles, h, mid)){
                r = mid;
            }
            else {
                l = mid + 1;
            }
        }
        return l;
    }
};