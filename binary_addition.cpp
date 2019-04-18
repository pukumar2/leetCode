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


/* Very very long method */
class Solution {
public:
    string addBinary(string a, string b) {

        int carry = 0;

        int i = a.length()-1;
        int j = b.length()-1;

        string res;

        while(i >= 0 && j >= 0){

              if(a[i] == '1' && b[j] == '1' && carry == 0){

                //  cout << "point 1" << endl;

                  carry = 1;
                  res = "0" + res;
              }
            else if(a[i] == '1' && b[j] == '1' && carry == 1){
                 carry = 1;
                  res = "1" + res;

            }

              else if((a[i] == '1' || b[j] == '1') && carry == 1){
                 // cout << "point 2" << endl;
                  carry = 1;
                  res = "0" + res;
              }
              else if(a[i] == '0' && b[j] == '0' && carry == 1){
                 // cout << "point 3" << endl;
                  res = "1" + res;
                  carry = 0;
              }
               else if((a[i] == '1' || b[j] == '1') && carry == 0){
                 //  cout << "point 4" << endl;
                  res = "1" + res;
                  carry = 0;
               }

               else {
                //   cout << "point 5" << endl;
                  res = "0" + res;
                  carry = 0;
               }

           //cout << "i: " << i << "j: " << j << res << endl;

            i--;
            j--;


        }

        while( i >= 0){

            if(a[i] == '1' && carry == 1){
               carry = 1;
               res = "0" + res;
            }
            else if(a[i] == '0' && carry == 1){
                carry = 0;
                res = "1" + res;
            }
            else if(a[i] == '1' && carry == 0){
                carry = 0;
                res = "1" + res;
            }
            else{
                res = "0" + res;
                carry = 0;
            }
            i--;
        }

        while( j >= 0){

            if(b[j] == '1' && carry == 1){
               carry = 1;
               res = "0" + res;
            }
            else if(b[j] == '0' && carry == 1){
                carry = 0;
                res = "1" + res;
            }
            else if(b[j] == '1' && carry == 0){
                carry = 0;
                res = "1" + res;
            }
            else{
                res = "0" + res;
                carry = 0;
            }
            j--;
        }

        if(carry){
            res = "1" + res;
        }

        return res;
    }
};
