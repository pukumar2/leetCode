/* Run time 0ms and beats 100% CPP Submissions */
class Solution {
public:
    string reverseOnlyLetters(string S) {

        int n = S.length();
        cout << "n is " << n << "\n";
        int p = n-1;
        int q = 0;

        while((int)S[p] < 65 || ((int)S[p] > 90 && (int)S[p] < 97) || (int)S[p] > 122){
            p--;
        }

        while((int)S[q] < 65 || ((int)S[q] > 90 && (int)S[q] < 97) || (int)S[q] > 122){
            q++;
        }

        int k = 0;

        int j= q;

        // cout << "P is " << p << " q is " << q << "\n";

        while(q <= p){

            if((int)S[p] < 65 || ((int)S[p] > 90 && (int)S[p] < 97) || (int)S[p] > 122){
                p--;
            }
            else if((int)S[q] < 65 || ((int)S[q] > 90 && (int)S[q] < 97) || (int)S[q] > 122){
                if(k == 0){
                    cout << "Point 1" << "\n";
                     k++;
                 }
                q++;
            }
            else {
                if(k == 0){
                    // cout << "p is " << p << "Q is " << q << "\n";
                    // cout << S[p] << " " << S[q] << "\n";
                    k++;
                }
                swap(S[p], S[q]);
                p--;
                q++;
            }


        }

        return S;
    }
};
