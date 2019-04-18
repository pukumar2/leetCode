/* Run time 4ms and beats 100% CPP Submissions */
class Solution {
public:
    bool isValid(string str) {

        stack<char> s;

        for(auto it : str){
            if(it == '(' || it == '{' || it == '['){
                //cout << "push " << it << endl;
                s.push(it);
            }

            else if(it == ')'){
                if(!s.empty() && s.top() == '('){
                    s.pop();
                } else {
                    s.push(it);
                }
            }
            else if(it == '}'){
                if(!s.empty() && s.top() == '{'){
                    s.pop();
                }else {
                    s.push(it);
                }
            }
            else if(it == ']'){
                if(!s.empty() && s.top() == '['){
                    s.pop();
                }else {
                    s.push(it);
                }
            }
        }

        return (s.size() == 0);
    }
};


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
