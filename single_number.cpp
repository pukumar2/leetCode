/* Run time 20ms and beats 90% of CPP Submissions */
class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int n = nums.size();
        if(n == 0){
            return 0;
        }

        if(n == 1){
            return nums[0];
        }

        /* Run time 24ms and beats 20% of CPP Submissions */
        int sum = 0;

        for(int i = 0; i < n; i ++){
            sum ^= nums[i];
        }

        return sum;

    }
};
