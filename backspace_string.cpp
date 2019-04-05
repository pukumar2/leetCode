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

/* Run time 4ms and beats 100% CPP SUbmissions, stack method */
class Solution {
public:
    bool backspaceCompare(string S, string T) {

       stack<char> s1;
       stack<char> s2;

       int n = S.length();
       int m = T.length();

        int i = 0;
        while(i < n){

            if(S[i] != '#')
                    s1.push(S[i]);

            else if(S[i] == '#' && s1.size() > 0){
                s1.pop();
            }
            else if(S[i] == '#' && s1.size() == 0){
                i++;
                continue;
            }
            i++;
        }

        i = 0;

        while(i < m){

            if(T[i] != '#'){
               s2.push(T[i]);
              // cout << "Inserting -> "  << T[i] << endl;
            }
            else if(T[i] == '#' && s2.size() > 0){
               // cout << "Popping -> " << s2.top() << endl;
                s2.pop();
            }
            else if(T[i] == '#' && s2.size() == 0){
                i++;
                continue;
            }

            i++;
        }



      /*  cout << "First stack " << endl;
        while(!s1.empty()){
            cout << s1.top() << " ";
            s1.pop();
        }
        cout << "\n";

        cout << "\nSecond stack " << endl;
        while(!s2.empty()){
            cout << s2.top() << " ";
            s2.pop();
        }
        cout << "\n";

        */

      while(!s1.empty() && !s2.empty()){
             if(s1.top() != s2.top()){
                  return false;
              }
              s1.pop();
              s2.pop();
        }

        if(s1.size() == 0 && s2.size() == 0){
            return true;
        }

        return false;

    }
};
