class Solution {
public:
    int nthUglyNumber(int n) {
        //此题可使用动态规划解决
        int dp[n];
        int a = 0,b = 0,c = 0;
        dp[0] = 1; //1是第一个丑数
        for(int i = 1; i < n; i++) {
            int n2 = dp[a]*2;
            int n3 = dp[b]*3;
            int n5 = dp[c]*5;
            dp[i] = std::min(n2,std::min(n3,n5));
            if(dp[i] == n2 ) {a++;}
            if(dp[i] == n3) {b++;}
            if(dp[i] == n5) {c++;}
        }
        return dp[n-1];
    }
};