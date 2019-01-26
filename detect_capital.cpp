/* Run time 4ms and beats 100% CPP submissions */
class Solution {
public:
    bool detectCapitalUse(string word) {

         int n = word.length();
         int flag_cap = 0;
         int count_cap = 0;
         int count_low = 0;
          if((int)word[0] >= 65 && (int)word[0] <= 90){
              //cout << "Setting flag " << "\n";
              flag_cap = 1;
              count_cap = 1;
          }else {
              count_low = 1;
          }



         for(int i = 1; i < n; i++){
             if((int)word[i] >= 65 && (int)word[i] <= 90){
                 cout << "High i " << i << "\n";
                 count_cap++;
             }
             else if((int)word[i] >= 97 && (int)word[i] <= 122){
                 cout << "Low i " << i << "\n";
                 count_low++;
             }
         }

         if(flag_cap == 1){
             if(count_cap == n || count_low == n -1){
                // cout << "Flag_cap 1 " << count_cap << " " << count_low << "\n";
                 return true;
             } else{
                 return false;
             }

         }

         if(count_low == n){
             cout << "Flag_cap 2 " << "\n";
             return true;
         }

         return false;
    }
};
