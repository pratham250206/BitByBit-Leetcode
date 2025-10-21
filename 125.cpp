class Solution {
public:
    bool isPalindrome(string s) {
        string l;
        for(char c:s){
            if(isalnum(c)){
                l+=tolower(c);
            }
        }
        string p=l;
        reverse(p.begin(),p.end());
        if(l==p){
            return true;
        }else{
            return false;
        }
    }
};
