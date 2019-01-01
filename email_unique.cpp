/* Solution 1 Run time takes 20ms
 * beats 95.81% of cpp submission
 */

/* Solution 2 Run time 36 ms
 * Beats 30.59% of cpp submissions
 */ 


/* solution 1 */
class Solution {
public:
    
    void compute_lps_array(int lps[], string pat){

        int i = 1;
        int j = 0;
        lps[0] = 0;
        int m = pat.length();

        while(i < m){
                if(pat[i] == pat[j]){
                        j++;
                        lps[i] = j;
                        i++;
                }
                else {
                        if(j != 0){
                                j = lps[j-1];
                        }
                        else {
                                lps[i] = 0;
                                i++;
                        }
                }
        }

}
    
   int KMPSearch(string pat, string txt){

        int m = pat.length();
        int n = txt.length();
        int i = 0;
        int j = 0;

        int lps[m];

        compute_lps_array(lps, pat);

        while(i < n){
                if(pat[j] == txt[i]){
                        i++;
                        j++;
                }

                if(j == m){
                        // cout << "Pattern found at " << i-j << "\n";
                        return i-j;
                        j = lps[j-1];
                }
                else if(i < n && pat[j] != txt[i]){
                        if(j != 0){
                                j = lps[j-1];
                        } else {
                                i = i+1;;
                        }
                }
        }

        return -1;
}

    
    int numUniqueEmails(vector<string>& emails) {
        
       int n = emails.size();
       int i = 0;
       // map<string, int> m;
       unordered_set<string> m;
       while(i < n){
         
           string pattern = "@";
           string name;
           string domain;
           
           // size_t found = emails[i].find(pattern);
           int ret = KMPSearch("@", emails[i]);
           if(ret != -1){
              domain = emails[i].substr(ret+1); 
              name = emails[i].substr(0, ret-1);
           }
           
           
           
           int len = name.length();
           int j = 0;
           string new_name;
           while(j < len){
               if(name[j] == '.'){
                   j++;
                   continue;
               }
               
               if(name[j] == '+'){
                   break;
               }
               
               new_name += name[j];
               j++;
           }
           
           new_name += "@" + domain;
           //pair<string, int> foo;
           //foo = make_pair(new_name, i);
           m.insert(new_name);
           i++;
       } 
        
        return m.size();
    }
};


/* Solution 2 */
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
