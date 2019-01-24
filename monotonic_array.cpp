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

/* Run time 108ms and beats 11% of CPP submissions */
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

        vector<int> in_a(A.begin(), A.end());
        vector<int> dc_a(A.begin(), A.end());

        sort(in_a.begin(), in_a.end());
        sort(dc_a.begin(), dc_a.end(), greater<int>());

        if(in_a == A || dc_a == A){
           return true;
        }

        return false;

    }
};
