// Run time 4ms

class Solution {
public:
    bool judgeSquareSum(int c) {
        
        int top = sqrt(c);
        
        int bot = 0;
        int det =0;
        
        while(bot <= top){
            
            det = bot * bot + top * top;
            
            if(det == c){
                return true;
            }
            else if(det < c){
                bot++;
            }
            else {
                top--;
            }
            
        }
        
        return false;
        
        
    }
};
