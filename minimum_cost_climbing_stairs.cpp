/* Run time 4ms and beats 100% of CPP submissions */
class Solution {
public:

    /* Run time 4ms and beats 100% of CPP SUbmissions */
    int minCostClimbingStairs(vector<int>& cost) {

       int n = cost.size();

       int dp[n+1];

        dp[0] = cost[0];
        dp[1] = cost[1];
        cost.push_back(0);
        for(int i = 2; i <= n; i++){
            dp[i] = min(dp[i-1]+cost[i], dp[i-2]+cost[i]);
        }

        return dp[n];
    } 

  /* This is recursion version but this exceeds time limit as
   * Dynamic programming one is better
    int helper(vector<int> cost, int end){

       // cout << end << "\n";

        if(end >= 0 && end <= 1){
            return cost[end];
        }

        return min((helper(cost, end-1) + cost[end]),
                   (helper(cost, end-2) + cost[end]));

    }

    int minCostClimbingStairs(vector<int>& cost) {

       int n = cost.size();
       cost.push_back(0);
       return helper(cost, n-2);

    } */
};
