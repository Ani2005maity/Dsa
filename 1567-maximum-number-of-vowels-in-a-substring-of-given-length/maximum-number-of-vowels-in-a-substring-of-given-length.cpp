class Solution {
public:
bool isVowel(char ch){
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') return true;
    return false;
}
    int maxVowels(string s, int k) {
        int n=s.size();
        int left=0;
        int count=0;
        int mxm=0;

        for(int right=0;right<n;++right){
            if(isVowel(s[right])) count++;
            while(right-left+1==k){
              mxm=max(mxm,count);
              if(isVowel(s[left])) count--;
              left++;
            }
        }
        return mxm;
    }
};