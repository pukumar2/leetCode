/* Run time 44 ms  and beats 97.6 % CPP Submission*/

class Solution {
public:
    int minDeletionSize(vector<string>& A) {
        
        int n = A.size();
        int m = A[0].size(); // Since all elements in vector are of same length
        
        int i = 0;
        int count = 0;
        
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n-1; j++){
                if(A[j][i] > A[j+1][i]){
                    count++;
                    break;
                }
            }
            
        }
        
        
        return count; 
    }
};
