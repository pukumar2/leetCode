/





class Solution {
public:
    bool isPerfectSquare(int num) {

       long sum = 0;

        for(int i = 1; sum < num; i += 2){
            sum += i;

            if(sum == num){
                return true;
            }
        }


        return false;

    }
};

/* it states that the sum of first n odd numbers is equal to the square of n.*/
