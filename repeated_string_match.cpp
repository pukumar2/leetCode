class Solution {
public:
    /* str + str means doubling, (str + str).substr(1, str.size() * 2 - 2) means removing the first char of the first half and the last char of the second half.

If there is no pattern, both of the first copy and the second copy will be changed, so str will not be found in (str + str).substr(1, str.size() * 2 - 2).
If there is a pattern, the first char of str can still be found in the first half, and the last char of str can also be found in the second half. Here is an example: abcabc is the original string, and (bcabc abcab) includes abcabc.
*/

    
    bool repeatedSubstringPattern(string s) {
        
        int n = s.size();
        
        string temp = (s+s).substr(1, s.size() * 2 - 2);
        if(temp.find(s) != -1){
            return true;
        }
        
        return false;
    }
};

class Solution {
public:
    /* This solution uses building a table similar to KMP. Basically the issue is that we have to first find the pattern. TO understand the code, take example: abcabcabc and run the while loop
    */

    
    bool repeatedSubstringPattern(string s) {
        
        int n = s.size();
        
        int i = 1;
        int j = 0;
        
        vector<int> dp(n+1, 0);
        
        while(i < n){
            
            if(s[i] == s[j]){
                dp[++i] = ++j;
            } else if(j == 0){
                i++;
            } else {
                j = dp[j];
            }
            
        }
        
        return (dp[n] && dp[n] % (n-dp[n]) == 0);
    }
};
