class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        string res= "";
        int MAX_SIZE=0;
        int i =0;
        while(i<n) {
            int l = i, r = i;
            while (l>=0 && r<n && s[l]==s[r]){

            if (MAX_SIZE < r-l+1){
                MAX_SIZE = r-l+1;
                res= s.substr(l, MAX_SIZE);
            }
                l--;
                r++;
        }
        l= i, r= i+1;
        while(l>=0 && r<n && s[l]==s[r]){

            if(MAX_SIZE < r-l+1){
                MAX_SIZE= r-l+1;
                res=s.substr(l, r-l+1);
            }

            l--;
            r++;
        }    
            i++;
        }
        return res;
    }    
};