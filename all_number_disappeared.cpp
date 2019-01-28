/* Run time 112ms and beats 25% of CPP Submissions */
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& a) {

        int n = a.size();

        if(n == 0 || n == 1){
            return vector<int>{};
        }

        vector<int> res;

        for(int i = 0; i < n; i++){
            if(a[abs(a[i])-1] > 0){
                a[abs(a[i]) - 1] *= -1;
            }
        }

       for(int i = 0; i < n; i++){
           if(a[i] > 0){
              res.push_back(i+1);
           }
       }

        return res;
    }
};

/* Leetcode complains runtime error but individual test cases passes */
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

        int n = nums.size();

        if(n == 0 || n == 1){
            return vector<int>{};
        }

        vector<int> res(n+1, -1);
        vector<int> r;
        int final_max = 0;
        int curr_max = 0;
        map<int, int> m;

        for(int i = 0; i < n; i++){

            if(final_max < curr_max){
                final_max = curr_max;
            }

            if(curr_max < nums[i]){
                curr_max = nums[i];
            }

            m.emplace(nums[i], i);
        }

        for(int i = 0; i < res.size(); i++){
            res[nums[i]] = 1;
        }


        for(int j = 0; j < res.size(); j++){
            if(res[j] == -1){
                r.push_back(j);
            }
        }

        return r;

    }
};
