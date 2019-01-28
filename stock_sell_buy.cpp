/* Run time 4ms and beats 99.05% CPP SUbmissions */
class Solution {
public:
    int maxProfit(vector<int>& prices) {

       int n = prices.size();
       if(n == 0){
            return 0;
        }

        int sum = 0;


        for(int i = 0; i < n-1; i++){
            if(prices[i+1] > prices[i]){
                sum += prices[i+1] - prices[i];
            }
        }

        return sum;



    }
};
