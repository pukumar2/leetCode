/* Run time 8ms and beats 98% CPP submissions */

class Solution {
public:
    string mostCommonWord(string str, vector<string>& banned) {
      
        int n = str.length();
        unordered_map<string, int> m;
        
        int i = 0;
        string temp;
        while(i < n){ 
              str[i] = tolower(str[i]);
              int t = str[i] - 'a';
              if(t < 0 || t >= 26){
                 if(banned.size() == 0 || 
                    find(banned.begin(), banned.end(), temp) == banned.end()){
                     m[temp]++;   
                 }
                  temp.clear();
                  i++;
                  continue;
              }
              
              if(t >= 0 && t < 26)
                 temp += str[i];
              i++;
        }
        
        if(temp.size() > 0){
           m[temp]++;   
        }
        
        int max_val = 0;
        string res;
        
        //cout << m.size() << endl;
        for(auto it : m){
            //cout << it.first << " " << it.second << max_val <<  endl;
            if(it.first.size() > 0 && max_val < it.second){
                max_val = it.second;
                res = it.first;
            }
        }
     
        return res;
    }
};
