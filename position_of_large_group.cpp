/* Run time 4ms and beats 100% of CPP Submissions */
class Solution {
public:
    vector<vector<int>> largeGroupPositions(string S) {

        //sort(S.begin(), S.end());

        int n = S.length();

        vector<vector<int>> v;

        if(n == 0 || n == 1){
            return v;
        }

        int i = 0;
        int count = 0;
        vector<int> temp;
        int final_max = 0;
        int cur_max = 0;
        int index = 0;

        while(i < n-1){
            index = i;

            while(S[i] == S[i+1]){
                cur_max++;
                i++;
            }

            if(cur_max >= 2){
                temp.push_back(index);
                temp.push_back(index + cur_max);
                v.push_back(temp);
            }
            cur_max = 0;
            temp.clear();
            i++;

        }

        return v;
    }
};
