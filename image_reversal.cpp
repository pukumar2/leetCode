/* Run time : 12 ms
 * Beats 54.62% of cpp submissions
 */
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {

        int m = A.size();
        int i = 0;
        int j = m-1;

        while(i <= j){
            int n = A[i].size();

            int k = 0;
            int p = n-1;

            while(k <= p){
                swap(A[i][k], A[i][p]);
                k++;
                p--;
            }

            i++;
        }

        for(int x = 0; x < m; x++){
            int n1 = A[x].size();
            for(int y = 0; y < n1; y++){
                if(A[x][y] == 0){
                    A[x][y] = 1;
                } else {
                    A[x][y] = 0;
                }
            }
        }

        return A;
    }
};
