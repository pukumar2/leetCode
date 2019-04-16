/* Run time 4ms and beats 100% CPP Submissions */
class Solution {
public:
    int lengthOfLastWord(string s) {

        istringstream ss(s);

        string word;
        do {
            ss >> word;
        } while(ss);

        return word.length();
    }
};


/* Run time 4ms */
class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int n = s.length()-1;
        int flag = 0;
        int len = 0;
        
        while(s[n] == ' '){
            n = n-1;
        }
        
        while(n >= 0){
            if(s[n] == ' '){
                return len;
            }  else {
                len++;
            }
            n--;
        }
        
        return len;
    }
};
