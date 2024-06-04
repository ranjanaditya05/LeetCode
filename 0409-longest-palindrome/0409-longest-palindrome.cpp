class Solution {
public:
    int longestPalindrome(string s) {
        int n = s.size();
        unordered_set<char> charset;
        int length = 0;
        for(int i = 0; i<n; i++) {
            if(charset.find(s[i])== charset.end()) {
                charset.insert(s[i]);
            } else {
                charset.erase(s[i]);
                length+=2;
            }
        }
        if(!charset.empty()) {
            length+= 1;
        }
        return length;
    }
};