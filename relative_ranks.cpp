/* Run time 0ms and beats 100% CPP SUbmissions */
class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {

        multimap<int, int, greater <int> > m;

        int n = nums.size();



        if(n == 0){

            return {};
        }

        if(n == 1){
            vector<string> res;
            res.push_back("Gold Medal");
        }


        if(n == 2){
            vector<string> res;
            res.push_back("Gold Medal");
            res.push_back("Silver Medal");
        }

        if(n == 3){
            vector<string> res;
           res.push_back("Gold Medal");
            res.push_back("Silver Medal");
            res.push_back("Bronze Medal");
        }


        vector<string> res(n);
        for(int i = 0; i < n; i++){
            m.emplace(nums[i], i);
        }

        int prev = -1;
        int prev_index = -1;
       /* res.push_back("Gold Medal");
        res.push_back("Silver Medal");
        res.push_back("Bronze Medal");
        */
        int count = 0;
        for(auto it = m.begin(); it != m.end(); it++){
           if(count == 0){
               cout << it->second << "\n";
               res[it->second] = "Gold Medal";
           }
           else if(count == 1){
               res[it->second] = "Silver Medal";
           }
           else if(count == 2){
               res[it->second] = "Bronze Medal";
           }

            else {
                res[it->second] = to_string(count+1);
            }
            count++;
        }

    return res;
    }
};
