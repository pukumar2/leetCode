/* Run time 40ms and beats 99% CPP Submissions */

class Solution {
public:
    bool triangle_can_be_formed(int a, int b, int c){
        
        if(b + c > a)
            return true;
        
        return false;
    }
    
    int largestPerimeter(vector<int>& A) {
        
         int n = A.size();
        
        if(n == 0){
            return 0;
        }
        
        if(n == 1){
            return A[0];
        }
        
        sort(A.begin(), A.end());
        
        if(triangle_can_be_formed(A[n-1], A[n-2], A[n-3])){
            return (A[n-1] + A[n-2] + A[n-3]);
        }
        
        int i = n-2;
        while(i >= 2){
             if(triangle_can_be_formed(A[i], A[i-1], A[i-2])){
                 
                return (A[i] + A[i-1] + A[i-2]); 
             }
             i--;
        }
    
        return 0;
        
    }
};
