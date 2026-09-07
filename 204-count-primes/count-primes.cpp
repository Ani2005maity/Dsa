class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;
        vector<bool> isPrime(n, true);
        isPrime[0] = isPrime[1] = false;
        int count = 1;
        for (int i = 3; 1LL * i * i < n; i += 2) {

            if (isPrime[i]) {
                for (long long j = 1LL * i * i; j < n; j += 2 * i) {
                    isPrime[j] = false;
                }
            }
        }
        for (int i = 3; i < n; i += 2) {
            if (isPrime[i])
                count++;
        }
        return count;
    }
};