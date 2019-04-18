/* Run time 4ms and beats 100% CPP Submissions */
class Solution {
public:
    void print_vec(vector<string> res){
        for(int i = 0; i < res.size(); i++){
            cout << res[i] << ": " << endl;
        }
    }

    bool wordPattern(string pattern, string str) {

        unordered_map<char, string> m;
        unordered_map<string, char> m2;

        set<char> myset;
        vector<string> s;
        istringstream ss(str);


        int i = 0;
        do {
            string word;
            ss >> word;
            if(word.length() > 0)
                s.push_back(word);
        } while(ss);

        if(s.size() != pattern.length()){
            return false;
        }

        for(int i = 0; i < pattern.size(); i++){
           // string temp =  + s[i];
            myset.insert(pattern[i]);
        }

        int n = s.size();
        string temp;
        while(i < n){

            auto it = m.find(pattern[i]);
            auto itr = m2.find(s[i]);
            if(it != m.end()){
                if(it->second != s[i]){
                    return false;
                }
            }
            else if(itr != m2.end()){
                if(itr->second != pattern[i]){
                    return false;
                }
            }

            else {
                m.emplace(pattern[i], s[i]);
                m2.emplace(s[i], pattern[i]);
            }
            i++;
        }

        return true;
    }
};

/* Run time 0ms, beats 100% CPP Submission
 */
class Solution {
public:
    bool wordPattern(string pattern, string str) {

     unordered_map<char, string> m;
        unordered_set<string> wordset;
        vector<string> s;

        int i=0;
        string temp = "";
        while(i < str.size()){
            if(str[i] == ' '){
                s.push_back(temp);
                temp = "";
            }else temp += str[i];
            i++;
        }


        if(temp.size() > 0) s.push_back(temp);
        if(s.size() != pattern.size())
            return false;

        for(int i=0; i<pattern.size(); ++i){
            if(m.find(pattern[i]) != m.end()){
                if(m[pattern[i]] != s[i])
                    return false;
            }
            m[pattern[i]] = s[i];
            wordset.insert(s[i]);
            if(wordset.size() != m.size()) return false;
        }
        return true;

    }
};
