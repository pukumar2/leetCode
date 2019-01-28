/* Run time 4ms and beats 100% CPP SUbmissions */
class Solution {
public:

    void print_arr(vector<int> v){
        int n = v.size();

        for(int i = 0; i < n; i++){
            cout << v[i] << "\n";
        }
    }

    bool isAnagram(string s, string t) {

         vector<int> v(26, 0);

         int n = s.length();
         int m = t.length();

         if(n == 0 && m == 0){
             return true;
         }

         if(n == 0 || m == 0){
             return false;
         }

         for(int i = 0; i < m; i++){
             v[t[i] - 'a'] += 1;
         }

         for(int i = 0; i < n; i++){
             v[s[i] - 'a'] -= 1;
         }

         bool zeros = std::all_of(v.begin(), v.end(), [](int i) { return i==0; });

         if(zeros){
             return true;
         }

         return false;

    }
};

/* RUn time 16ms and beats 36% CPP SUbmissions */
class Solution {
public:

    void print_arr(vector<int> v){
        int n = v.size();

        for(int i = 0; i < n; i++){
            cout << v[i] << "\n";
        }
    }

    bool isAnagram(string s, string t) {

         unordered_map<char, int> m;

         int n = t.length();
         int ml = s.length();

         if(n == 0 && ml == 0){
             return true;
         }

         if(n == 0 || ml == 0){
             return false;
         }

         for(int i = 0; i < n; i++){
             auto it = m.find(t[i]);
             if(it != m.end()){
                 it->second++;
             }else {
                 m.emplace(t[i], 1);
             }
         }

         int i  =0 ;
         for(i = 0; i < ml; i++){
               auto it = m.find(s[i]);
               if(it == m.end()){
                   return false;
               } else {
                   if(it->second == 1){
                      m.erase(s[i]);
                   } else {
                      it->second--;
                   }
               }
         }

         if(m.size() == 0){
             return true;
         }

        return false;

    }
};
