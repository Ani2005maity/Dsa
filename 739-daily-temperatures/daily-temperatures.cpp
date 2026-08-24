class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> ans(n, 0);
        stack<int> s;
        for(int i = n - 1; i >= 0; i--){
            while(s.size() > 0 && temperatures[s.top()] <= temperatures[i]){
                s.pop();
            }
            ans[i] = s.empty() ? 0 : s.top() - i;
            s.push(i);
        }
        return ans;
    }
};