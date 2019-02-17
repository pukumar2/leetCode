/* Run time 8ms and beats 90% of CPP Submissions */
class Solution {
public:
    int minAddToMakeValid(string str) {

        stack<char> s;

        int n = str.size();
        if(n == 0){
            return 0;
        }
        int i, num=0;
        for(i = 0; i < n; i++){
            if(str[i] == '('){
                s.push(str[i]);
            } else if(!s.empty() && str[i] == ')'){
                s.pop();
            }
            else if(s.empty() && str[i] == ')'){
                num++;
            }
        }

        if(num){
            return (num + s.size());
        }

        return s.size();

    }
};
