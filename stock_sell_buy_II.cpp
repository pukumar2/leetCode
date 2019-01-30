/* Run time 4ms and beats 99% of CPP Submissions */
class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int n = prices.size();
       if(n == 0){
            return 0;
        }

        int minprice = INT_MAX;
        int max_profit = INT_MIN;

        for(int i = 0; i < n; i++){
            minprice = min(minprice, prices[i]);
            max_profit = max(max_profit, prices[i] - minprice);
        }

        return max_profit;

    }
};
