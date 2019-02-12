/* Run time 8ms and beats 98% CPP Submissions */
class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {

        int final_max = 0;
        int count  = 0;

        int n = nums.size();
        int curr = 0;
        if(n == 0){
            return 0;
        }

        int j = 0, i = 0;
        int cur = 0;
        while(j < n-1){
            if(nums[j] < nums[j+1]){
                j++;
            } else {
                cur = j-i+1;
                if(final_max < cur){
                    final_max = cur;
                }
                j++;
                i = j;
            }

        }
        cur=j-i+1;

            if(final_max < cur){
                final_max = cur;
            }


         return final_max;
    }
};
