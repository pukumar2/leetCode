/* Run time 24ms and beats 84% CPP Submissions */
class Solution {
public:
    int countBinarySubstrings(string s) {

        char prev = s[0];
        int tmp = 1;
        int count = 0;
        int sub = 0;
        for (int i = 1; i < s.size();) {
            while (i < s.size() && prev == s[i]) {
                tmp += 1;
                i++;
            }
            prev = s[i];
            while (i < s.size() && prev == s[i] && count < tmp) {
                sub += 1;
                count += 1;
                i++;
            }
            tmp = count;
            count = 0;
        }
        return sub;
    }
};
