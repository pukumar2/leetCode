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
