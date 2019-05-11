/* Run time 16ms and beats 99% of CPP Submissions */
class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n = nums.size();

        if(n == 0)
            return 0;

       if(n == 1 && nums[0] == 0){
            return 1;
        }

        if(n == 1 && nums[0] != 0){
            return nums[0] -1;
        }

        auto max_el = max_element(nums.begin(), nums.end());
        auto min_el = min_element(nums.begin(), nums.end());

        cout << "max is " << *max_el << "\n";

        vector<int> v(*max_el+1, 0);

        for(int i = 0; i < n; i++){
            v[nums[i]] += 1;
        }

        // int flag = 0;
        for(int i = 0; i <= *max_el; i++){
            if(v[i] == 0){
              //   flag = 1;
                cout << "Coming " << i << "\n";
                return i;
            }
        }

        return *max_el + 1;
    }
};

/* Similar but different solution */
class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n = nums.size();

        if(n == 0){
            return 0;
        }

        // For single element pattern is if the nums[0] is even then it is nums[0] + 1
        // else nums[0] - 1. With the exception of 0.
        if(n == 1){
            if((n & 1) && nums[0] > 0){
                return nums[0] - 1;
            }
            else {
                return nums[0] + 1;
            }
        }

        int max_e = *max_element(nums.begin(), nums.end());
        vector<int> vec(max_e + 2, 0);

        for(int i = 0; i < n; i++){
            vec[nums[i]] = 1;
        }

        for(int i = 0; i <= max_e+1; i++){
            if(vec[i] == 0){
                return i;
            }
        }

        return -1;
    }
};
