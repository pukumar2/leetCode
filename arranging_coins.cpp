/* Run time 32ms and beats 75% of CPP Submissions */

class Solution {
public:
    int arrangeCoins(int n) {
        
        if(n == 0){
            return 0;
        }
        
        if(n == 1){
            return 1;
        }
        
        int i = 1;
        int num = n;
        int count = 0;
        int new_num = 0;
        int last = 0;
        while(num){
            if(i != 1 && new_num <= last){
                break;
            }
            count++;
            new_num = num - i;
            
            i++;
            last = num - new_num;
            num = new_num;
            
        }
        
        return count;
    }
};
