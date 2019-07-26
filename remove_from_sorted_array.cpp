/* Run time 20ms and beats 100% CPP Submissions */
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int nums_len = nums.size();

        if(nums_len == 0){
            return 0;
        }

        int count = 0;
        int index = 1;

        while(index < nums_len){
             if(nums[index] == nums[index-1]){
                 count++;
             }
             else {
                 nums[index - count] = nums[index];
             }
             index++;
        }

        return index - count;
    }
};
