/* Run time 0ms and beats 100% of CPP Submissions although takes extra memory */
class Solution {
public:
    string addStrings(string num1, string num2) {

        int n = num1.size();
        int m = num2.size();

        int carry = 0;
        string res;
        int i = n-1;
        int j = m-1;
        while(i >= 0 && j >= 0){
            string temp = res;
            res.clear();
            int t = (int)num1[i] - '0' + (int)num2[j] - '0' + carry;
            if(t >= 10){

               carry = t/10;
               t = t % 10;

            } else {
                carry = 0;
            }

            res += (char)t + '0';
            res += temp;
            i--;
            j--;
        }

        // carry = 0;
        while(i >= 0){
             string temp = res;
             res.clear();

             int t = ((int)num1[i] - '0') + carry;

             if(t >= 10){
                 carry = t/10;
                 t %= 10;
             } else {
                 carry = 0;
             }

             res += ((char)t + '0');
             res += temp;
             i--;
        }

        while(j >= 0){
            string temp = res;
            res.clear();


            int t=0;
            t = ((int)num2[j] - '0') + carry;
            if(t >= 10){
                carry = t/10;
                t %= 10;
            }else {
                carry = 0;
            }

            res += ((char)t + '0');
            res += temp;
            j--;
        }


        if(carry ==1){
            string temp = res;
            res.clear();
            res += (char)carry + '0';
            res += temp;
        }


        return res;
    }
};

/* Run time 0ms and beats 100% of CPP Submissions and with no memory */
class Solution {
public:
    string addStrings(string num1, string num2) {

        int n = num1.size();
        int m = num2.size();

        int carry = 0;
        string res;
        int i = n-1;
        int j = m-1;
        while(i >= 0 && j >= 0){
            int t = (int)num1[i] - '0' + (int)num2[j] - '0' + carry;
            if(t >= 10){

               carry = t/10;
               t = t % 10;

            } else {
                carry = 0;
            }

            t += 48;
            res = (char)t  + res;
            i--;
            j--;
        }

        // carry = 0;
        while(i >= 0){
            // string temp = res;
             //res.clear();

             int t = ((int)num1[i] - '0') + carry;

             if(t >= 10){
                 carry = t/10;
                 t %= 10;
             } else {
                 carry = 0;
             }

             char s = ((char)t + '0') ;
             res = s + res;
             i--;
        }

        while(j >= 0){
          //  string temp = res;
           // res.clear();


            int t=0;
            t = ((int)num2[j] - '0') + carry;
            if(t >= 10){
                carry = t/10;
                t %= 10;
            }else {
                carry = 0;
            }

            char s = (char)t + '0';
            res = s + res;
            j--;
        }


        if(carry ==1){
            string temp = res;
            //res.clear();
            //carry += 48;
            char s = (char)carry + '0';
            res = s + res;
        }


        return res;
    }
};
