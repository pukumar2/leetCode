/* Run time 4ms */
class Solution {
public:
    bool checkPerfectNumber(int num) {

        if(num == 0){
            return false;
        }

        int top = sqrt(num);
        int sum = 0;

        for(int i = 1; i <= top; i++){
            if(num % i == 0){

                if(num / i == i){
                    cout << i << "\t";
                    sum += i;
                } else {
                    cout << num/i << "\t" << i << "\t";
                    sum += (num / i) + i;
                }
            }
        }

        sum -= num;

        if(sum == num ){
            return true;
        }

        return false;

    }
};
