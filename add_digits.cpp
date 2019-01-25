/* Run time 4ms and beats 99.26% of CPP submissions */
class Solution {
public:

    int helper(int num){

        if(num == 0){
            return 0;
        }

        if(num < 10){
            return num;
        }

        int sum = 0;
        while(num){
              sum += num % 10;
              num /= 10;
        }

        return helper(sum);

    }

    int addDigits(int num) {

        return helper(num);

    }
};
