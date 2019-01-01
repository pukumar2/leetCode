/* Run time 36 ms
 * Beats 30.59 of cpp submissions
 */ 

class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        
        int n = emails.size();
        map<string, int> m;
        int i = 0;
        
        while(i < n){
            int j = 0;
            int k = 0;
            int str_len = emails[i].size();
            string str;
            int flag = 0;
        
                int len = emails[i].length();
                
                while(j < len){
                    if(emails[i][j] == '@'){
                        flag = 1;
                    } 
                    else if(flag == 0 && emails[i][j] == '.'){
                        j++;
                        continue;
                    }
                    else if(flag == 0 && k == 0 && emails[i][j] == '+'){
                           k = 1;
                           j++;
                           continue;
                    }
                    
                    else if(k == 1 && flag == 0){
                        j++;
                        continue;
                    } 
                        str += emails[i][j];
                        j++;
                }
                
                pair<string, int> p;
                p = make_pair(str, i);
                m.insert(p);
            
            i++;
        }
        
        return m.size();
    }
};
