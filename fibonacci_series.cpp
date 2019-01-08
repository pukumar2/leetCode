/* Run time 0ms, beats 100% submission */
class Solution {
public:
    int fib(int N) {
        
        int dp[N+2];
        
        dp[0] = 0;
        dp[1] = 1;
        
        for(int i = 2; i <= N; i++){
            dp[i] = dp[i-1] + dp[i-2];
        }
        
        return dp[N];
        
    }
}
