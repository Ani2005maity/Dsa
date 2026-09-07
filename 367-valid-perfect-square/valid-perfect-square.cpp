class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num == 0 || num == 1) return true;
        int hf = num / 2;
        for(auto i = 0; i <= hf; i++){
            if(1LL*i*i == num){
                return true;
            }
        }
        return false;
    }
};