/* Run time 0ms and beats 100% of CPP Submissions */
class Solution {
public:
    char findTheDifference(string s, string t) {
         int n = t.length();
        int m = s.length();
        
        
        if(n == 0){
            
        }
        
        map<char, int> t_v;
       
        /*
        
        for(int i = 0; i < n; i++){
            auto it = t_v.find(t[i]);
            if(it != t_v.end()){
                it->second++;
            }
            else {
                t_v.emplace(t[i], i);
            }
        }
        
        for(int i = 0; i < m; i++)
        */
        int sum = 0;
        for(int i = 0; i < n;i ++){
            sum ^= (int)t[i] ^ ((int)s[i]);
        }
        
        return (char)sum;
        
    }
};
