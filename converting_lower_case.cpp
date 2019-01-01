/* Run time 0ms
 * beats 100% of run time
 */ 

class Solution {
public:
    string toLowerCase(string str) {
        
        int n = str.length();
        
        for(int i = 0; i < n; i++){
            int asc = str[i];
            if(asc >= 65 && asc <= 90){
               str[i] = (char)(asc + 32);
            }
        }
        
        return str;
    }
};
