/* Run time 0ms and beats 100% CPP Submissions */
/* As with any addition operation(decimal and binary), we have the current sum and the carry. In binary addition, the carry occurs in the case, where both the bits are 1, so we use the "&" operator to find the carry bit. We use the "<<" operator to left-shift the carry, since it is involved in the next-bit calculation(moving to the next left one). The "^" is simply for the bit cases where there is only one 1. We continue until there is no more carry bit, i.e. b becomes zero and then a is simply the answer.
*/


class Solution {
public:
    int getSum(int a, int b) {
        
        int carry = 0;
        
        while(b != 0){
            carry = (a&b) << 1;
            a = a^b;
            b = carry;
        }
        
        return a;
    }
};
