/* Run time 4ms and beats 100% CPP Submissions */
class Solution {
public:

    int maxCount(int m, int n, vector<vector<int>>& ops) {

       int n1 = ops.size();

        if(n1 < 1){
            return m * n;
        }

        int minx = ops[0][0];
        int miny = ops[0][1];

        for(int i = 1; i < n1; i++){
            if(minx > ops[i][0]){
                minx = ops[i][0];
            }

            if(miny > ops[i][1]){
                miny = ops[i][1];
            }
        }

        return minx * miny;
    }
};
