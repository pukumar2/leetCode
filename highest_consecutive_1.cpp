/* Run time 24ms and beats 98% of CPP Submissions */
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int n = nums.size();

        int final_max = 0;
        int curr_max = 0;

        if(n == 0){
            return 0;
        }

        if(n == 1){
            return nums[0];
        }

        if(nums[0] == 1){
            curr_max = 1;
        }

        for(int i = 1; i < n; i++){
            if(nums[i-1] != nums[i]){
                final_max = max(final_max, curr_max);
                curr_max = 0;
            }

            if(nums[i] == 1){
                curr_max++;
            }
        }

        final_max = max(final_max, curr_max);

        return final_max;

    }
};
