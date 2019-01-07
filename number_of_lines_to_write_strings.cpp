class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string S) {
        
        int wid_len = widths.size();
        int str_len = S.length();
        
        vector<int> res;
        int temp_count = 0;
        int last = 0;
        int count = 0;
        int i = 0;
        // for( i = 0; i < str_len; i++){
        while(i < str_len){    
            if(temp_count > 100){
               temp_count = 0;
               i -= 1;
               count++; 
            } else {
                
                temp_count += widths[S[i] - 'a'];
                last = widths[S[i] - 'a'];
                i++;
            }
            
            
           
            
        }
        
        // cout << count << temp_count << "\t";
        if(temp_count > 0 && temp_count < 100){
            count += 1;
        } 
        else if(temp_count > 0 && temp_count >= 100){
            count += 2;
            temp_count = last;
        }
        
        res.push_back(count);
        res.push_back(temp_count);
        
        return res;
    }
};
