/* Run time 4ms and beats 90% CPP Submission */
class Solution {
public:
    bool isValid(string s) {

            stack<char> st;

            int n = s.length();


            int i = 0;
            if(n == 0){
                return true;
            }

            while(i < n){

                if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                    st.push(s[i]);
                }

                if(!st.empty() && s[i] == '}' && st.top() == '{'){
                    st.pop();
                } else if(s[i] == '}') {
                    st.push(s[i]);
                }

                if(!st.empty() && s[i] == ')' && st.top() == '('){
                    st.pop();
                }else if(s[i] == ')'){
                    st.push(s[i]);
                }

                if(!st.empty() && s[i] == ']' && st.top() == '['){
                    st.pop();
                }else if(s[i] == ']'){
                    st.push(s[i]);
                }

                i++;
            }

            if(!st.empty()){
                return false;
            }

            return true;


    }
};
