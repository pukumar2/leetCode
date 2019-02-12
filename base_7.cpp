/* Run time 0ms and beats 100% of CPP submissions */
class Solution {
public:
    string convertToBase7(int num) {

         int n = num;

        if(n == 0){
            return "0";
        }

        string res;



        while(n != 0){

            int temp = 0;

            temp = n % 7;

            //if(temp != 0)
               res = to_string(abs(temp)) + res;
            cout << res << "\n";
            n /= 7;
        }

        if(num < 0){
            res = "-" + res;
        }


        return res;
    }
};
