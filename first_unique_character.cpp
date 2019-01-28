/* RUn time 24ms and beats 98% CPP Submissions */
class Solution {
public:
    int firstUniqChar(string s) {

        multimap<char, int> m;

        int n = s.length();

        if(n == 0){
            return -1;

        }
        if(n == 1){
            return 0;
        }

        vector<int> v(26, 0);

        for(int i = 0; i < n; i++){
            v[(int)s[i] - 'a'] += 1;
        }

        for(int i = 0; i < n; i++){
            if(v[(int)s[i] - 'a'] == 1){
                return i;
            }
        }

        return -1;
    }
};
