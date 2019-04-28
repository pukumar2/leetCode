/* Run time 4ms and beats 100% CPP Submissions */
class Solution {
public:
    vector<int> getRow(int rowIndex) {

        vector<int> res(rowIndex + 1, 1);

        if(rowIndex < 2){
            return res;
        }

        for(int i = 1; i < rowIndex; i++){
            for(int j = i; j > 0; j--){
                res[j] = res[j] + res[j-1];
            }
        }

        return res;

    }
};
