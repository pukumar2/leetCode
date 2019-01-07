class Solution {
public:
    vector<int> shortestToChar(string S, char C) {
        
        int len = S.length();
        
        vector<int> vec;
        vector<int> res;
        for(int i = 0; i < len; i++){
            if(S[i] == C){
                vec.push_back(i);
            }
        }
        int j = 0;
        for(int i = 0; i < len; i++){
            
            if(j == 0 && S[i] != C){
                res.push_back(vec[j] - i);
            }
            
            else if(S[i] == C){
                res.push_back(0);
                j++;
            }
            else if(j > 0 && S[i] != C){
                
                int temp_1 = abs(i - vec[j-1]);
                int temp_2 = abs(i - vec[j]);
                int temp_3 = abs(i - vec[j+1]);
            
                res.push_back(min(temp_1, min(temp_2, temp_3)));
            }
            
            
        }
        
        return res;
    }
};
