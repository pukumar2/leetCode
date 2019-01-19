/* Run time 12ms and beats 90% CPP SUbmissions */
class Solution {
public:
    vector<string> reorderLogFiles(vector<string>& logs) {

        vector<string> digit_logs;
        map<string, string> letter_logs;

        int n = logs.size();

        for(int i = 0; i < n; i++){
            string identifier;
            istringstream ss(logs[i]);
            ss >> identifier;
            string word;
            ss >> word;
            string temp;
            int j = 0;
            while(logs[i].length() > 0 && logs[i][j] != ' '){
                  j++;
            }
            temp.append(logs[i].begin()+j+1, logs[i].end());
            // cout << temp << "\n";
            if(word[0] >= 48 && word[0] <= 57){
               digit_logs.push_back(logs[i]);
            } else {
               letter_logs.emplace(temp, identifier);
            }

        }


        vector<string> res;

        for(auto it = letter_logs.begin(); it != letter_logs.end(); it++){
            res.push_back( it->second + " " + it->first);
        }

        for(int i = 0; i < digit_logs.size(); i++){
            res.push_back(digit_logs[i]);
        }

        return res;
    }
};
