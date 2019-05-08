/* /* Run time 8ms and beats 100% CPP Submissions, but uses o(n) space */
class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        vector<int> res;

        int n = nums.size();
        int count = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] != 0){
               res.push_back(nums[i]);
            } else {
                count++;
            }
        }

        for(int i = 0; i < count; i++){
            res.push_back(0);
        }

        nums = res;

    }
};

/* Run time 4ms and beats 100% CPP submissions with O(1) space */
class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int n = nums.size();

        if(n == 0){
            return;
        }

        int index = 0;

        for(int i = 0; i < n; i++){
            if(nums[i] != 0){
                nums[index++] = nums[i];
            }
        }

        while(index < n){
            nums[index++] = 0;
        }

    }
};

