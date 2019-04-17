/* Run time 8ms and beats 60% CPP Submissions */
class Solution {
public:
    bool judgeSquareSum(int c) {
          
        long top = sqrt(c);
        long bot = 0;
        long long sum  = 0;
        
        while(bot <= top)
        {
            sum = top * top + bot * bot;
            
            if(sum == c){
                return true;
            }
            
            else if(sum > c){
                top--;
            }
            
            else if(sum < c){
               bot++;
            }
        }
        
        return false;
    }
};

/* Below code is wrong due to integer overflow */
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
