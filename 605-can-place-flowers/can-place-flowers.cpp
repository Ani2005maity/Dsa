class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int s = flowerbed.size();
        int count = n;
        if(count == 0) return true;
        for (int l = 0; l < s; l++) {
            if (flowerbed[l] == 0 && (l == 0 || flowerbed[l - 1] == 0) && (l == s - 1 || flowerbed[l + 1] == 0)) {
                flowerbed[l] = 1;
                count--;
                if (count == 0)
                    return true;
            }
        }
        return count == 0;
    }
};