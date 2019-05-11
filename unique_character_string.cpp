/* Run time 36ms and beats 99% CPP Submissions */
class Solution {
public:

    void print_map(unordered_map<char, int> m){

        for(auto it : m){
            cout << it.first << ": " << it.second << endl;
        }

    }

    int firstUniqChar(string s) {

        vector<int> vec(256, 0);
        int n = s.length();

        if(n == 0){
            return -1;
        }
        if(n == 1)
            return 0;

        for(int i = 0; i < n; i++){
            vec[(int)s[i]]++;
        }

        for(int i = 0; i < n; i++){
            if(vec[(int)s[i]] == 1){
               return i;
            }
        }

        return -1;
    }
};
