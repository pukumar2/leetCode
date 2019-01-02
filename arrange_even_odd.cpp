class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        
        int n = A.size();
      /*
        RUN TIME:: 44ms
        vector<int> result;
        vector<int> even;
        vector<int> odd;
       
        for(int i = 0; i < n; i++){
            if(A[i] % 2 == 0){
                even.push_back(A[i]);
            } else {
                odd.push_back(A[i]);
            }
        }
        
        result.reserve(even.size() + odd.size());
        result.insert(result.end(), even.begin(), even.end());
        result.insert(result.end(), odd.begin(), odd.end());
        return result;
        */
        
        /*
        
        RUNTIME: 56 ms
        if(n == 0 || n == 1){
            return A;
        }
        
        vector<int> result;
        vector<int>::iterator it;
        
        for(int i = 0; i < n; i++){
            if(A[i] % 2 == 0){
               it = A.begin();
               A.insert(it, A[i]); 
            } else {
                A.push_back(A[i]);
            }
        }
        return A; */
        
        /* 36 ms
        if(n == 0 || n == 1){
            return A;
        }
        
        vector<int> result(n);
        int j = n-1;
        // int i = 0;
        int k = 0;
        for(int i = 0; i < n; i++){
            if(A[i] % 2 == 0){
                result[k] = A[i];
                k++;
            } else {
                result[j] = A[i];
                j--;
            }
        }
        
        return result;
        */
        
        /*
        Run time 36 ms */
        if(n == 0 || n == 1){
            return A;
        }
        
        int j = n-1;
        int i = 0;
        
        while(i <= j){
            if(A[i] % 2 == 0){
               i++; 
                continue;
            }
            if(A[j] % 2 != 0){
                j--;
                continue;
            } 
            swap(A[j], A[i]);
            i++;
            j--;
        } 
        return A;   
    }
};
