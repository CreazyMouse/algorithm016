class Solution {
public:
    int numDecodings(string s) {    
        if(s[0] == '0' || s.empty()) {return 0;}
        int length = s.size();
        int dp[length+1];
        dp[0] = 1;
        dp[1] = s[0] == '0'? 0:1;
        for(int i=1; i < s.size(); i++) {
            if(s[i-1] == '1' || (s[i-1] == '2' && s[i] <= '6')) {
                if(s[i] == '0') {
                    dp[i+1] = dp[i-1];
                }else{
                     dp[i+1] = dp[i-1] + dp[i];
                }
            } else if(s[i] == '0') {
                return 0;
            } else {
                dp[i+1] = dp[i];
            }
        }
        return dp[length];    
    }
};