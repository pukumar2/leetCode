/* Given a non-empty array of digits representing a non-negative integer, plus one to the integer.

The digits are stored such that the most significant digit is at the head of the list, and each element in the array contain a single digit.

You may assume the integer does not contain any leading zero, except the number 0 itself.

Example 1:

Input: [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.
Example 2:

Input: [4,3,2,1]
Output: [4,3,2,2]
Explanation: The array represents the integer 4321. */

vector<int> plusOne(vector<int>& digits) {

        vector<int> res;

        int carry = 0;
        int n = digits.size()-1;

        if(digits[n] + 1 >= 10){
            carry = 1;
            digits[n] = (digits[n] + 1) % 10;
        } else {
            digits[n] += 1;
        }

        if(carry == 0){
            return digits;
        }
        n--;
        while(n >= 0){

            int sum = digits[n] + carry;

            if(sum >= 10){
                carry = 1;
                digits[n] = sum % 10;
            } else {
                digits[n] = sum;
                carry = 0;
            }

            if(carry == 0){
                break;
            }

            n--;
        }

        if(carry == 1){
            digits.insert(digits.begin(), carry);
        }

        return digits;
    }
};
