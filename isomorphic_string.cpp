/* Run time 8ms, beats 92% of CPP submissions */

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        int n1 = s.length();
        int n2 = t.length();
        
        if(n1 != n2){
            return false;
        }
        
        map<char, char> m;
        
        for(int i = 0; i < n1; i++){
            auto it = m.find(s[i]);
            if(it != m.end()){
                if(it->second != t[i]){
                    return false;
                }
            }
            else {
                pair<char, char> p;
                p = make_pair(s[i], t[i]);
                m.insert(p);
            }
        }
        
        m.clear();
        
        for(int i = 0; i < n2; i++){
            auto it = m.find(t[i]);
            if(it != m.end()){
                if(it->second != s[i]){
                    return false;
                }
            }
            else {
                pair<char, char> p;
                p = make_pair(t[i], s[i]);
                m.insert(p);
            }
        }
        
        
        return true;
    }
};

/* By normalizing the string */
bool isIsomorphic(string s, string t) {

         unordered_map<int, int> m;

         for(auto it : s){
            if(!m.count(it)) { m[it] = m.size(); }
         }

         string str;
         for(auto it : s){
             str += (m[it] + 'a');
         }

        m.clear();
        for(auto it : t){
            if(!m.count(it)) { m[it] = m.size(); }
         }
         string str2;
        for(auto it : t){
            str2 += (m[it] + 'a');
        }

        cout << str2 << endl;

        return (str == str2);
    }
