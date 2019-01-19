/* Run time is 32ms and beats 99% CPP Submissions */
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {

        vector<vector<int>> res;

        int m = nums.size();
        unsigned int total_num = 0;
        vector<int> temp_res;


       for(unsigned int i = 0; i < m; i++){
            for(int j = 0; j < nums[i].size(); j++){
                temp_res.push_back(nums[i][j]);
                total_num += 1;
            }
        }

        if(total_num != r*c){
            return nums;
        }
        else {
            vector<int> temp;
            for(int i =0; i < temp_res.size(); i++){
                // cout << "coming c " << c << "\n";
                if(i >= c && i % c == 0){
                   res.push_back(temp);
                   temp.clear();
                }
                temp.push_back(temp_res[i]);
            }

            res.push_back(temp);

        }



        return res;

    }
};
