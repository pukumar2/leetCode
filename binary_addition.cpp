/* Run time 4ms and beats 99.79% of CPP Submission */
class Solution {
public:
    string addBinary(string a, string b) {


        int n = a.length()-1;
        int m = b.length()-1;

        int c = 0;
        string res;

        while(n >= 0 && m >= 0){
            c += a[n] - '0';
            c += b[m] - '0';

            if(c%2){
                res = '1' + res;
            } else {
                res = '0' + res;
            }

            c /= 2;
            n--;
            m--;
        }

        while(n >= 0){
            c += a[n] - '0';
            if(c%2){
                res = '1'+ res;
            } else {
                res = '0'+ res;
            }

            c /= 2;
            n--;
        }

        while(m >= 0){
            c += b[m] - '0';
            if(c%2){
                res = '1'+ res;
            } else {
                res = '0'+ res;
            }

            c /= 2;
            m--;
        }

        if(c > 0){
            res = '1' + res;
        }

        return res;
    }
};
