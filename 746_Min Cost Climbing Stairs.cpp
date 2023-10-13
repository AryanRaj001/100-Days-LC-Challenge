class Solution {
public:

    //Space optimization
    int solve(vector<int>& cost, int n){
        // //Step 1:creation of dp array
        // vector<int> dp(n+1);

        // //Step 2: Base case analyse
        // dp[0] = cost[0];
        // dp[1] = cost[1];
        int prev2 = cost[0];
        int prev1 = cost[1];

        // //Step 3: 
        // for(int i=2;i<n;i++){
        //     dp[i] = cost[i] + min(dp[i-1], dp[i-2]);
        // }

        for(int i=2;i<n;i++){
            int curr = cost[i] + min(prev1, prev2);
            prev2=prev1;
            prev1=curr; 
        }

        // return min(dp[n-1], dp[n-2]);
        return min(prev1, prev2);

    }

    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        return solve(cost, n);
    }
};
