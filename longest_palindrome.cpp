/* Run time 0ms and beats 100% of CPP Submissions */
class Solution {
public:
    int longestPalindrome(string s) {

        int n = s.length();

        if(n == 0){
            return 0;
        }

        if(n == 1){
            return 1;
        }

        int result = 0;
        bool addone = false;

        vector<int> v(256);

        for(int i = 0; i < n; i++){
            v[(int)s[i]] += 1;
        }

        for(int i =0; i < 256; i++){
            result += v[i] - v[i] % 2;

            if(v[i] % 2 != 0){
                addone = true;
            }
        }

        if(addone){
            result += 1;
        }

        return result;

    }
};
