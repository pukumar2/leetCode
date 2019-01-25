/* Run time 8ms and beats 100% CPP Submissions, but uses o(n) space */
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

/* Run time 8ms and beats 100% of CPP SUbmissions with O(1) space.*/
class Solution {
public:
    void print_arr(vector<int> nums){
        int n = nums.size();

        for(int i = 0; i < n; i++){
            cout << nums[i] << "\t";
        }
        cout << "\n";
    }

    void moveZeroes(vector<int>& nums) {

        vector<int> res;

        int n = nums.size();

        int i = 0;
        int j = 0;

        int flag = 0;
        while(i < n){
            if(flag == 0){
                if(nums[i] != 0){
                    i++;
                    j++;
                }
                else {
                    i++;
                    flag = 1;
                }
            }
            else {
                if(nums[i] != 0){
                   swap(nums[i], nums[j]);
                    i++;
                    j++;
                }else {
                    i++;
                }
            }


        }

    }
};
