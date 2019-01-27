/* Run time 12ms and beats 100% of CPP submissions */
class Solution {
public:
    bool canConstruct(string r, string ma) {

         int n = r.length();
         int m = ma.length();

         if(m == 0 && n == 0){
             return true;
         }



         vector<int> v(256, 0);

         for(int i = 0; i < m; i++){
             v[(int)ma[i]] += 1;
         }

         int count = 0;
         for(int i = 0; i < n; i++){

             if(v[(int)r[i]] > 1){
                 v[(int)r[i]]--;
                 count++;
             }
             else if(v[(int)r[i]] > 0){
                 v[(int)r[i]]--;
                 count++;
             }

         }

        if(count == n){
            return true;
        }

        return false;
    }
};
