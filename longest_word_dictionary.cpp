/* Run time 32ms and beats 76% of CPP Submissions */
class Solution {
public:
    string longestWord(vector<string>& words) {

        string res = "";
        unordered_set<string> s;
        int n = words.size();
        if(n == 0){
            return res;
        }

        sort(words.begin(), words.end());

        for(int i = 0; i < n; i++){
            if(words[i].size() == 1 || s.count(words[i].substr(0, words[i].length() - 1))){
                if(words[i].size() > res.size()){
                    res = words[i];
                }
                s.insert(words[i]);
            }
        }

        return res;
    }
};
