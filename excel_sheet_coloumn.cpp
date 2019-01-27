/* RUn time 4ms and beats 100% CPP Submissions */
class Solution {
public:
    int titleToNumber(string s) {

        int n = s.length();
        if(n == 0){
            return 0;
        }

        if(n == 1){
            return ((int)s[0] - 'A'+1);
        }
        int count = 0;
        int i = 0;
        while(i < n){
              count = (int)s[i] - 64 + count*26;
              i++;
        }

        return count;
    }

};
