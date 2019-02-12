/* RUn time 0ms and faster than 100% of CPP submissions */
/* Memory usage o(n+m) as we are having two strings to track '#' character */
class Solution {
public:
    bool backspaceCompare(string str1, string str2) {

        int n = str1.length();
        int m = str2.length();

        if(n == 0 && m == 0){
            return true;
        }

        if(m == 0 || n == 0){
            return false;
        }

        string t1;
        // int i = 0;
        for(int i = 0; i < n; i++){
            if(str1[i] == '#'){
                t1 = t1.substr(0, t1.length() - 1);

            } else {
                t1 += str1[i];
            }
            //cout << t1 << "\n";
        }

        string t2;
        for(int i = 0; i < m; i++){
            if(str2[i] == '#'){
                t2 = t2.substr(0, t2.length() - 1);

            } else {
                t2 += str2[i];
            }
           // cout << t2 << "\n";
        }

        // cout << t1 << " " <<  t2 << "\n";

        if(t1 == t2){
            return true;
        }

        return false;
    }
};
