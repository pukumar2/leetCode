/* Run time 52 ms and beats 37% of CPP Submissions 
        
        int m = s.length();
        int n = p.length();
        vector<int> res;
        
        if(n > m){
            return res;
        }
        
        map<char, int> pat;
        map<char, int> str;
        
        for(int i= 0; i < n; i++){
            auto it = pat.find(p[i]);
            if(it != pat.end()){
                it->second++;
            }
            else {
                pair<char, int> pi;
                pi = make_pair(p[i], 1);
                pat.insert(pi);
            }
        }
        
       
        int i = 0;         
        while(i < m-(p.size()-1)){          
            if(i == 0){
                
                int j = i;
                int k = j + p.size() - 1;
                
                while(j <= k){
                    auto it = str.find(s[j]);
                        if(it != str.end()){
                            it->second++;
                        }else {
                            pair<char, int> pi;
                            pi = make_pair(s[j], 1);
                            str.insert(pi);
                        }
                    j++;
                }    
                
                if(map_compare(pat, str)){
                    res.push_back(i);
                } 
                    
                
            } else {
                
                auto itr = str.find(s[i-1]);
                if(itr->second > 1){
                    itr->second--;
                } else{
                    str.erase(s[i-1]);
                }
                
                auto it = str.find(s[i+(p.size()-1)]);
                if(it != str.end()){
                    it->second++;
                }
                else {
                    pair<char, int> pi;
                    pi = make_pair(s[i+(p.size()-1)], 1);
                    str.insert(pi);
                }
                
                if(i == 1){
                    cout << "str map is ";
                    for(auto itr = str.begin(); it != str.end(); it++){
                        cout << it->first << "\t";
                    }
                    cout << "\n\n";
                }
                
                if(map_compare(pat, str)){
                    res.push_back(i);
                }
            }
            i++;
        }
        
        return res; */
        
        /* Run time 652ms and beats 9% of CPP Submission 
        int m = s.length();
        int n = p.length();
        
        vector<int> res;
        vector<int> vec(26, 0);
        // vector<int> m(26, 0);
        
        for(int i = 0; i < n; i++){
            vec[p[i] - 'a'] += 1;
        }
        
        int j = 0;
        int k = 0;
        for(int i = 0; i < m; i++){
           j = i; 
           k = j + (n-1); 
           vector<int> str(vec);
           while(k < m && j <= k){
                  str[s[j]- 'a']--;
                  j++;
            }
            
            
            if(all_of(str.begin(), str.end(), [](int l) { return l==0; })){
                res.push_back(i);   
            }    
        }
        
        return res;*/
