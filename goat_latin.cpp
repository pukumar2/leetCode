/* Run time 4ms but beats 50% of CPP Submissions */
class Solution {
public:

    int mi;

    string append_string(string& temp, int i, int flag){

        string final_str;
        map<char, int> m {{'a', 1}, {'e', 2}, {'i', 3}, {'o', 4}, {'u', 5}, {'A', 6}, {'E', 7}, {'I', 8}, {'O', 9}, {'U', 10}};

        if(m.find(temp[0]) != m.end()){
           final_str = temp + "ma";
        }

        else {
            char end = temp[0];
            string t = temp.substr(1) + end;
            final_str += t;
            final_str += "ma";
        }

        while(i >= 0){
            final_str += "a";
            i--;
        }

        if(flag != 1){
            final_str += " ";
        }

        return final_str;
    }

    string toGoatLatin(string str) {
        int n = str.length();
        mi = n;
        if(n == 0){
            return "";
        }

        string temp_str;
        string final_str;
        string ans;
        int j = 0;

        for(int i = 0; i < n; i++){
            if(str[i] == ' '){
                final_str = append_string(temp_str, j, 0);
                temp_str.clear();
                j++;
            } else {
                temp_str += str[i];
            }
            ans += final_str;
            final_str.clear();
        }

        final_str.clear();
        final_str = append_string(temp_str, j, 1);
        ans += final_str;

        return ans;
    }
};
