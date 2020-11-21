class Solution {
public:
    int climbStairs(int n) {
        //爬楼梯问题使用动态规划解决
        // int ans[n];
        // if(n == 0) return 0;
        // if(n == 1) return 1;
        // if(n == 2) return 2;
        // ans[0] = 1; ans[1] = 2;
        // for(int i = 2; i < n; i++) {
        //     ans[i] = ans[i-1] + ans[i-2];
        // }
        // return ans[n-1];
        int p = 0, q = 0, r = 1;
        for(int i = 1; i <= n; i++) {
            p = q;
            q = r;
            r = p + q;
        }
        return r;        
    }
};