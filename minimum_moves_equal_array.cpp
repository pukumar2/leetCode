/* Run time 36ms and beats 96% of CPP Submissions */
class Solution {
public:

    int minMoves(vector<int>& nums) {

     int count = 0;
     int n = nums.size();

     if(n == 0 || n == 1){
         return 0;
     }

     auto min_ele = min_element(nums.begin(), nums.end());

     for(int i = 0; i < n; i++){
         count += nums[i] - *min_ele;
     }

     return count;
    }
};
