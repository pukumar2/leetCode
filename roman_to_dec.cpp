/* Run time 36ms and beats 67% of CPP Submissions */
class Solution {
public:
    int romanToInt(string S) {

        unordered_map<char, int> m;

        m.emplace('I', 1);
        m.emplace('V', 5);
        m.emplace('X', 10);
        m.emplace('L', 50);
        m.emplace('C', 100);
        m.emplace('D', 500);
        m.emplace('M', 1000);

        int n = S.length();

        if(n == 0){
            return 0;
        }

        if(n == 1){
            return m[S[0]];
        }

        int sum = m[S[n-1]];

        for(int i = n-2; i >=0 ;i--){
            if(m[S[i]] < m[S[i+1]]){
                sum -= m[S[i]];
            }else {
                sum += m[S[i]];
            }
        }

        return sum;

    }
};
