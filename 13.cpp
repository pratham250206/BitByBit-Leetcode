class Solution {
public:
    int romanToInt(string s) {
        int pre=INT_MAX;
        int cr;
        int res=0;
        for(int i=0;i<s.size();i++) {
            if(s[i] =='I'){ 
                cr=1;
            }else if(s[i] =='V'){ 
                cr=5;
            }else if(s[i] == 'X'){ 
                cr=10;
            }else if(s[i] == 'L'){ 
                cr = 50;
            }else if(s[i] == 'C'){
                cr = 100;
            }else if(s[i] == 'D'){ 
                cr = 500;
            }else if(s[i] == 'M'){ 
                cr = 1000;
            }
            res+=cr;
            if(pre<cr){
                res-=2*pre;
            }
            pre=cr;
        }
        return res;
    }
};
