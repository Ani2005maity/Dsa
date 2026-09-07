class Solution {
public:
    string sortVowels(string s) {
        string vowels;
        for (char ch : s) {
            if (isVowel(ch)) {
                vowels += ch;
            }
        }
        sort(vowels.begin(), vowels.end());
        int j = 0;
        for (char &ch : s) {
            if (isVowel(ch)) {
                ch = vowels[j++];
            }
        }
        return s;
    }
private:
    bool isVowel(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' ||
               ch == 'o' || ch == 'u' ||
               ch == 'A' || ch == 'E' || ch == 'I' ||
               ch == 'O' || ch == 'U';
    }
};