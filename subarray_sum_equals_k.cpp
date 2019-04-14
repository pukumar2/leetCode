/* Run time 36ms and beats 98% CPP Submissions */
class Solution {
public:


    int subarraySum(vector<int>& nums, int k) {

        unordered_map<int, int> m;
        int cur_sum = 0;
        int ans = 0;
        m[0] = 1;
        for(int i = 0; i < nums.size(); i++){
            cur_sum += nums[i];
            if(m.count(cur_sum - k) > 0){
               ans  += m[cur_sum - k];
            }
            m[cur_sum]++;
        }

        return ans;
    }
};
