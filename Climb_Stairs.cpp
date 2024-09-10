class Solution {

    // private:
    // int func(int n, vector<int> &dp){
    //     if(n<=1){
    //         return n;
    //     }
    //     //if problem hasn't been called, that means it's not -1, then we will
    //     return the answe stored for that problem
    //     //in our dp array
    //     if(dp[n]!=-1) return dp[n];
    //     //otherwise, we will call the problem
    //     return dp[n] = func(n-1, dp)+func(n-2, dp);

    // }
public:
    int climbStairs(int n) {
        // STEP-1---------RECURSION------
        //  if(n==0) return 1;
        //  if(n==1) return 1;

        // return climbStairs(n-1) + climbStairs(n-2);

        // STEP-2-------------MEMOISATION--------tc=0(N), sc = 02(n)
        // i) CREATE A DP ARRYA OF SIZE N+1
        //  vector<int> dp(n+1, -1);
        //  int ans = func(n, dp);

        // return ans;
        // tabulation

        // create a dp array
        // call recursion in loops
        //  vector<int> dp(n+1, -1);
        //  dp[0]=1;
        //  dp[1]=1;

        // for(int i=2;i<=n;i++){
        //     dp[i] = dp[i-1]+ dp[i-2];
        // }

        // return dp[n];

        //---------------------SPACE OPTIMISATION---------------

        int prev2 = 1;
        int prev = 1;

        for (int i = 2; i <= n; i++) {
            int cur_i = prev2 + prev;
            prev2 = prev;
            prev = cur_i;
        }
        

        return prev;
    }
};
