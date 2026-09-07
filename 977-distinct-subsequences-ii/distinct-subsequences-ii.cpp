class Solution {
public:
    int distinctSubseqII(string s) {
        const int MOD = 1e9 + 7;
        vector<long long> dp(26, 0);
        long long total = 0;
        for (char ch : s) {
            int idx = ch - 'a';
            long long newSubseq = (total + 1) % MOD;
            total = (total + newSubseq - dp[idx] + MOD) % MOD;
            dp[idx] = newSubseq;
        }
        return total;
    }
};