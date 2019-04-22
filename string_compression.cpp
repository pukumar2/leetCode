// Checked
/* Run time 8ms, beats 92% of CPP Submissions */
class Solution {
public:

    void print_chars(vector<char> v, int i){

        cout << "Index is " << i << ": ";

        for(int i =0; i < v.size(); i++){
            cout << v[i] << "\t";
        }
        cout << "\n";

    }
    int compress(vector<char>& chars) {

       if(chars.size() == 1) return 1;
        // point is used to point to the position of chars being replaced
        // count is used to count how many characters are there for current char
        int point = 0;
        int count = 1;
        int i = 0;
        char current = chars[0];
        for (i = 1; i < chars.size(); i++){
            if(current == chars[i]) count++;
            else{
                // convert the count to string
                string count_s = to_string(count);
                // write the char
                chars[point++] = current;
                // for the case where the count of character is more than 1
                if(count > 1){
                    for (int j = 0; j < count_s.length(); j++){
                        chars[point++] = count_s[j];
                    }
                }
                // reset the current character and the count
                current = chars[i];
                count = 1;
            }

            // print_chars(chars, i);
        }

        // last part of the vector chars
        chars[point++] = current;
        if(count > 1){
            string count_s = to_string(count);
            for (int j = 0; j < count_s.length(); j++){
                chars[point++] = count_s[j];
            }
        }

        // print_chars(chars, i);
        // cout << point << "\n";
        return point;

    }
};






/* Run time 12ms and beats 18% CPP Submissions */

class Solution {
public:
    int compress(vector<char>& chars) {
       
        
    
        vector<pair<char, int> > res;
        
        int i = 0;
        int n = chars.size();
        
        while(i < n){
            int j = i;
            int count = 0;
            
            while(j < n && chars[i] == chars[j]){
                count++;
                j++;
            }
            if(count > 0){
                pair<char, int> p;
                p = make_pair(chars[i], count);
                res.push_back(p);
            } else {
                count = 1;
                pair<char, int> p;
                p = make_pair(chars[i], count);
                res.push_back(p);
            }   
            i = j;
        }
        
        chars.clear();
        for(int i = 0; i < res.size(); i++){
            
            chars.push_back(res[i].first);
            if(res[i].second >= 10){
                int num= res[i].second;
                vector<int> temp;
                while(num){
                        temp.push_back(num % 10);
                        num /= 10;
                }
                
                
                int k = temp.size() -1;
                while( k >= 0){
                    chars.push_back(temp[k] + '0');
                    k--;
                }
                
            } else {
                if(res[i].second > 1){
                    chars.push_back(res[i].second + '0');
                }    
            }
            
        }
        
        return chars.size();
        
    }
};
