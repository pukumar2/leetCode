/* Run time 0ms and beats 100% of CPP Submissions */
class Solution {
public:
    bool rotateString(string A, string B) {

         int n = A.length();
         int m = B.length();

         if(n == 0 && m == 0){
             return true;
         }

         if(n == 0 || m == 0){
             return false;
         }

         for(int i = 0; i < n; i ++){
             string temp;
             temp += A[0];
             A = A.substr(1);
             A += temp;
             if(B.compare(A) == 0){
                 return true;
             }
         }

        return false;
    }
};
