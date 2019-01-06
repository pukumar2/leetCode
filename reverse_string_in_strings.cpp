/* Run time 24 ms
 * Beats 48.6% CPP submission */

class Solution {
public:

    void reverse(string& s){
        int n = s.length();
        int i = 0;
        int j = n-1;
        while(i <= j){
            swap(s[i], s[j]);
            i++;
            j--;
        }
    }

    string reverseWords(string s) {

        int len = s.length();
        string result;
        int flag = 0;

        string temp;
        for(int i = 0; i < len; i++){
            if(s[i] == ' '){
                reverse(temp);
                if(flag == 0){
                    result +=  temp;
                    flag = 1;
                } else {
                    result += " " + temp;
                }
                temp.clear();
            }else {
                temp += s[i];
            }
        }

        if(temp.length() > 0){
            reverse(temp);
            if(flag == 1){
                result += " " + temp;
            } else {
                result += temp;
            }
        }

        return result;
    }
};
