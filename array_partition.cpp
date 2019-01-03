/* Run time 60ms, beats 60.38% CPP Submissions */

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
     
        sort(nums.begin(), nums.end());
        
        int n = nums.size();
        
        vector<int> map(20001, 0);
        
        for(int i = 0; i < n; i++){
            map[nums[i] + 10000]++;
        }
        int sum = 0;
        int flag = 0;
        for(int i = 0; i < 20001;){
            
            if(map[i] > 0 && flag == 0){
                sum += i - 10000;
                flag = 1;
                map[i]--;
            } 
            if (map[i] > 0 && flag == 1){
                flag = 0;
                map[i]--;
            }  else {
                /* This part is tricky. The reason we didn't include the i 
                 * Increment in for loop is because imagine a situation where
                 * you have duplicate items like 1,2,3,2.
                 * Once you finish processing first two (odd number so second if), 
                 * there is no way you can go to the second one.
                 */
                i++;
            }
            
        }
        
        return sum;
    }
};
