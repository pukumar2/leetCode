/* Run time 32ms and beats 99.21% of CPP Submissions */
class Solution {
public:
    int maximumProduct(vector<int>& nums) {

        int n = nums.size();
        if(n == 0)
            return 0;

        if(n == 1){
            return nums[0];
        }

        if(n == 2){
            return nums[0]*nums[1];
        }

        if(n==3){
            return nums[0]*nums[1]*nums[2];
        }

        int max1 = INT_MIN;
        int max2 = INT_MIN;
        int max3 = INT_MIN;
        int min1 = INT_MAX;
        int min2 = INT_MAX;

        for(int i = 0;i < n; i++){
            if(max1 < nums[i]){
                max3 = max2;
                max2 = max1;
                max1 = nums[i];
            } else if(max2 < nums[i]){
                max3 = max2;
                max2 = nums[i];
            } else if(max3 < nums[i]){
                max3 = nums[i];
            }

            if(min1 > nums[i]){
                min2 = min1;
                min1 = nums[i];
            } else if(min2 > nums[i]){
                min2 = nums[i];
            }
        }

       /* cout << max1 << "\n";
        cout << max2 << "\n";
        cout << max3 << "\n";
        cout << min1 << "\n";
        cout << min2 << "\n";
        */
        return max(max1*max2*max3, max1*min1*min2);

    }
};
