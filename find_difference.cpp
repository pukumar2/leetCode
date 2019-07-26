class Solution {
public:
    
    char helper(string s, string t){
        
        char c;
        unordered_map<char, int> map;
        
        for(auto it : s){
            map[it]++;
        }
        
        for(auto it : t){
            auto itr = map.find(it);
            if(itr == map.end()){
                return itr->first;
            }
        }
        
        return c;
    }
    
    char findTheDifference(string s, string t) {
        
        int s_len = s.length();
        int t_len = t.length();
        char c;
        
        if(s_len == 0){
            return t[0];
        }
        
        if(t_len == 0)
            return s[0];
        
        vector<int> vec(26, 0);
        
        for(auto it : s){
            vec[it - 'a']++;
        }
        
        for(auto it : t){
            vec[it - 'a']--;
        }
        
        for(int i = 0; i < 26; i++){
            if(vec[i] == 1 || vec[i] == -1){
                return i+'a';
            }
        }
        
        
        return c;
    }
};
