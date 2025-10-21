class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m=0;
        for(const auto &c:accounts){
            int s=accumulate(c.begin(),c.end(),0);
            m=max(m,s);
        }
        return m;
    }
};
