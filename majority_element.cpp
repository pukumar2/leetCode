/* Run time 12ms and beats 99% of CPP Submissions */
class Solution {
public:
    int majorityElement(vector<int>& nums) {

        unordered_map<int, int> m;
        int n = nums.size();

        if(n == 0)
            return 0;

        if(n == 1){
            return nums[0];
        }

        for(int i = 0; i < n; i++){
            auto it = m.find(nums[i]);
            if(it != m.end()){
               it->second++;
            }else {
                m.emplace(nums[i], 1);
            }
        }

        for(auto it = m.begin(); it != m.end(); it++){
            if(it->second > n/2){
                return it->first;
            }
        }

        return 0;

    }
};
