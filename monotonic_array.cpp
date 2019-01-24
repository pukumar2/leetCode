/* Run time 60ms and beats 66% CPP Submissions */
class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        
        int n = A.size();
        
        if(n == 0){
            return true;
        }
        
        if(n == 1){
            return true;
        }
        
        int flag = 0;
        
        int i = 1;
        while(i < n && A[i-1] == A[i]){
                i++;            
        }
        
        if(i >= n){
            return true;
        }
        
        if(i < n && A[i-1] > A[i]){
            flag = 1;
        }
        
        
        for(int j = i; j < n; j++){
            if(flag == 1){
                if(A[j-1] < A[j]){
                    return false;
                }
            } else {
                if(A[j-1] > A[j]){
                    return false;
                }
            }    
        }
        
        return true;
        
    }
};
