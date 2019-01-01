class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        
        map<string, int> ma;
        int count = 0;
        int n = words.size();
        vector<string> dict {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        for(int i = 0; i < n; i++){
            int m = words[i].size();
            int j = 0;
            string word;
            
            while(j < m){
                  word += dict[words[i][j] - 'a'];
                  j++;
            }
          
            if(ma.find(word) == ma.end()){
                count++;
                pair<string, int> foo;
                foo = make_pair(word, i);
                ma.insert(foo);
            }
        }
     
        return count;
    }
};
