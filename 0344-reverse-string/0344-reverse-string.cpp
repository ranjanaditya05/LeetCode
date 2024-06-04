class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        char temp, prev;
        int j = n-1;
        for(int i = 0; i<(n/2); i++) {
            temp = s[i];
            prev= s[j];
            s[j]= temp;
            s[i]= prev;
            j--;
        }        
    }
};