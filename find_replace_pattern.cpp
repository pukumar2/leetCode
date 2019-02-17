/* Run time 8ms and beats 95% of CPP Submissions */
class Solution {
public:

    string norm(string s){

        unordered_map<char, int> m;
        for(char c : s){
            if(!m.count(c)){
                m[c] = m.size();
            }
        }

        for(int i = 0; i < s.size(); i++){
            s[i] = 'a' + m[s[i]];
        }

        return s;
    }

    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> res;
        string cmp = norm(pattern);
        for(int i = 0; i < words.size(); i++)
        {
            if(norm(words[i]) == cmp){
                res.push_back(words[i]);
            }
        }
        return res;

    }
};
