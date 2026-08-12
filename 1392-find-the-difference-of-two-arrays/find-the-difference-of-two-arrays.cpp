class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int> st1;
        for(int val : nums1){
            st1.insert(val);
        }
        set<int> st2;
        for(int val : nums2){
            st2.insert(val);
        }
        vector<int> v1;
        vector<int> v2;
        for(int val : nums1){
            if(st2.find(val) != st2.end()){
                continue;
            } else {
                if (find(v1.begin(), v1.end(), val) == v1.end()){
                    v1.push_back(val);
                } else {
                    continue;
                }
            }
        }
        for(int val : nums2){
            if(st1.find(val) != st1.end()){
                continue;
            } else {
                if (find(v2.begin(), v2.end(), val) == v2.end()){
                    v2.push_back(val);
                } else {
                    continue;
                }
            }
        }
        return {v1, v2};

    }
};