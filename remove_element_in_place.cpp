/* Run time 8ms and beats 100% of CPP Submissions */
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int count = 0;

        int n = nums.size();

        if(n == 0){
            return 0;
        }

        int i = 0;
        while(i < nums.size()){
            if(nums[i] == val){
               nums.erase(nums.begin() + i);
                continue;
            }
            i++;
        }


        return nums.size();
    }
};
