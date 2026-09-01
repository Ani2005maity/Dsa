class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> cnt(10, 0);
        for (int digit : digits) {
            cnt[digit]++;
        }

        vector<int> ans;
        for (int num = 100; num < 1000; num += 2) {
            vector<int> temp = cnt;

            int a = num / 100;
            int b = (num / 10) % 10;
            int c = num % 10;

            temp[a]--;
            temp[b]--;
            temp[c]--;
            if (temp[a] >= 0 && temp[b] >= 0 && temp[c] >= 0) {
                ans.push_back(num);
            }
        }

        return ans;
    }
};