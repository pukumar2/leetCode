/* Run time 4ms, beats 61% CPP Submission */

class Solution {
public:
    int findComplement(int num) {
        
      int mask = ~0;
        int i = 0;
        
        while (num & mask) {
            mask <<= 1;
        }
            
        return ~mask & ~num;  
        
    }
};
