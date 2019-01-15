/* Run time 180ms and beats 50% of CPP Submissions */
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        if(k == 0 || nums.size() == 0){
            return 0;
        }

        int i = 0;
        int j = 0;
        double sum = 0;
        double max_sum = INT_MIN;

        int n = nums.size()-1;

        for(i = 0; i < k; i++){
            sum += nums[i];
        }

         sum /= k;
        max_sum = max(max_sum, sum);

        while( i <= n){

            sum = sum *k - nums[j];

            sum = (nums[i] + sum)/k;
            // cout << sum << "\n";
            max_sum = max(max_sum, sum);
           // i++;
            i++;
            j++;
        }

        return max_sum;
    }
};

/* Run time 162ms and beats 63% of CPP SUbmissions */
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        int n = nums.size();

        if(k == 0 || n == 0){
            return 0;
        }

        int sum = 0;
        int max_sum = INT_MIN;
        int i;
        int j;
        for(i = 0; i < k; i++){
            //cout << "i is " << i;
            sum += nums[i];
        }

        max_sum = max(max_sum, sum);
        int m = 0;
        for(j = i; j < n; j++){
            sum = sum - nums[m];
            sum += nums[j];
            m++;
            max_sum = max(max_sum, sum);
        }
        return (double)max_sum / (double)k;

    }
};

/* Run time 172 ms and beats 81% of CPP Submissions */
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        int n = nums.size();

        if(k == 0 || n == 0){
            return 0;
        }

        int sum = 0;
        int max_sum = INT_MIN;
        int i;
        int j;
        for(i = 0; i < k; i++){
            //cout << "i is " << i;
            sum += nums[i];
        }

        max_sum = max(max_sum, sum);
        for(j = i; j < n; j++){
            sum = sum - nums[j-k];
            sum += nums[j];
            max_sum = max(max_sum, sum);
        }
        return (double)max_sum / (double)k;

    }
};
