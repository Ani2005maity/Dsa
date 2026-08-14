class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> s(nums.begin(), nums.end());

        if (s.size() < 3)
            return *s.rbegin();

        auto it = s.begin();
        advance(it, s.size() - 3);
        return *it;
    }
};