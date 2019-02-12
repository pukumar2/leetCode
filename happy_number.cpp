/* Run time 0ms and beats 100% CPP Submissions */
class Solution {
public:

    int digitsquare(int n){
        int res = 0;
        int temp = n;
        while(temp){
               int t2 = temp % 10;
               res += pow(t2, 2);
               temp /= 10;
         }

        return res;

    }

    bool isHappy(int n) {

         int temp = n;

         int t1 = n;
        int t2 = n;

        do{

            t1 = digitsquare(t1);
            t2 = digitsquare(t2);
            t2 = digitsquare(t2);
        } while(t1 != t2);

        if(t1 == 1){
            return true;
        }

        return false;

    }
};
