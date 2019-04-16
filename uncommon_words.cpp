/* Short method Run time 4ms and beats 100% CPP submissions */
class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {

        istringstream ss(A);
        istringstream sss(B);
        vector<string> res;
        unordered_map<string, int> m;

        do {
            string word;
            ss >> word;
            m[word]++;
        }while(ss);

        do {
            string word;
            sss >> word;
            m[word]++;
        }while(sss);

        for(auto it : m){
            if(it.second == 1){
               res.push_back(it.first);
            }
        }

        return res;
    }
};


/* Long method */
class Solution {
public:
    vector<string> uncommonFromSentences(string a, string b) {
        
        int len = a.size();
        map<string, int> m;
        int i = 0;
        string temp;
        vector<string> vec;
        
       while(i < len){
           
             if(a[i] != ' '){
                 temp += a[i];
             } else {
                 auto it = m.find(temp);
                 if(it != m.end()){
                    it->second++;
                 } else {
                    pair<string, int> p;
                    p = make_pair(temp, 1);
                    m.insert(p); 
                 }
                 temp.clear();
             }   
            i++;
       } 
        
        if(temp.length() > 0){
            
            auto it = m.find(temp);
            if(it != m.end()){
                it->second++;
            } else {
                pair<string, int> p;
                p = make_pair(temp, 1);
                m.insert(p);
            }

        }
        
        temp.clear();
        len = b.length();
        i = 0;
        
        while(i < len){
            
            if(b[i] != ' '){
                temp += b[i];
            } else {
                auto it = m.find(temp);
                if(it != m.end()){
                    it->second++;
                    //cout << "B temp " << temp << "\n";
                } else {
                    pair<string, int> p;
                    p = make_pair(temp, 1);
                    m.insert(p);
                }
                temp.clear();
            }
            i++;
        }
        
         if(temp.length() > 0){
            
            auto it = m.find(temp);
            if(it != m.end()){
                //cout << " extra " << temp;
                it->second++;
            } else {
                pair<string, int> p;
                p = make_pair(temp, 1);
                m.insert(p);
            }

        }
        
        
        for(auto it = m.begin(); it != m.end(); it++){
            if(it->second < 2)
                vec.push_back(it->first);
        }
       
        
        
        return vec;
        
    }
};
