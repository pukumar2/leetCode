/* Run time 0ms and beats 100% of CPP Submissions */
class Solution {
public:
    bool checkRecord(string s) {

        int num_a = 0;
        bool late = false;
        int num_l = 0;

        int n = s.size();
        if(n == 0){
            return true;
        }

        for(int i = 0; i < n; i++){

            if(s[i] == 'A'){
                num_a++;
            }
            if(i+2 < n && s[i] == 'L' && s[i+1] == 'L' && s[i+2] == 'L'){
                return false;
            }
        }

        if(num_a > 1){
            return false;
        }


        return true;
    }
};
