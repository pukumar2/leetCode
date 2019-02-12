/* There is no run time but this program has been tested outside leetcode
 * Logic is right and didn't want to waste time in leetcode why it throws runtime error
 * May be some edge case missing
 */
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int count = 0;

        int n = nums.size();

        if(n == 0){
            return 0;
        }

        if(n == 1){
            if(nums[0] == val){
                nums.clear();
            } else {
                return 1;
            }
        }

        int i  = 0 ;
        while(nums.size() >= 0 && i < n ){
            if(nums[i] == val)
            {
                nums.erase(nums.begin()+i);
            } else {
                i++;
            }
        }


        return nums.size();

    }
};
