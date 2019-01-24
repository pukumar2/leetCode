/* Run time 4ms and beats 100% CPP Submissions */
class Solution {
public:

    vector<string> res;

    void helper(string str, string s, int n){

          if(s.length() == str.length()){
              res.push_back(s);
          }
           else {
               if(isalpha(str[n])){
                   s.push_back(tolower(str[n]));
                   helper(str, s, n+1);
                   s[s.length()-1] = toupper(str[n]);
                   helper(str, s, n+1);
               } else {
                   s.push_back(str[n]);
                   helper(str, s, n+1);
               }
           }

    }

    vector<string> letterCasePermutation(string S) {


          string temp;
           helper(S, temp, 0);

        return res;
    }
};
