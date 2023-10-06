class Solution {
public:
    int integerBreak(int n) {
        vector<int> dp(101);
        dp[1]=1;
        dp[2]=1;
        dp[3]=2;

        for(int i=4;i<=n;i++){
            int num = i;

            for(int j=1;j<=num;j++){
                int x = j;
                int y = num-x;

                dp[i] = max(dp[i],max(x*y,max(x*dp[y],max(y*dp[x],dp[x]*dp[y]))));
            }
        }
        return dp[n];
    }
};
