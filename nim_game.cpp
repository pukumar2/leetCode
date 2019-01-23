/* Run time 0ms and beats 100% CPP Submissions */
class Solution {
public:
    bool canWinNim(int n) {

        if(n == 0){
           return false;
        }
       if(n % 4){
           return true;
       }

      return false;

    }
};
