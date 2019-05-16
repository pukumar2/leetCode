/* Run time 100ms and beats 88% CPP submissions */
class Solution {
public:

    bool helper(string s, int start, int end, bool skipped){

        while(start <= end){
            if(s[start] != s[end]){
                if(skipped){
                    return false;
                }

                if(s[start + 1] == s[end]){
                    if(helper(s, start+1, end, true)){
                        return true;
                    }
                }

                if(s[start] == s[end-1]){
                    if(helper(s, start, end-1, true)){
                        return true;
                    }
                }

                return false;
            }

            start++;
            end--;
        }

        return true;
    }

    bool validPalindrome(string s) {

        bool skipped = false;
        int s_len = s.length()-1;

        return helper(s, 0, s_len, skipped);
    }
};
