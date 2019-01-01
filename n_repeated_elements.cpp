/* Run time 40ms, beats 78.72% of cpp submission */

class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        
        map<int, int> m;
        int count = 0;
        int max = INT_MIN;
        int n = A.size();
     
        for(int i = 0; i < n-3; i++){
            if(A[i] == A[i+1]){
                return A[i];
            } 
              if(A[i] == A[i+2]){
                return A[i];
            }
            
        }
        return A[n-1];
    }
};
