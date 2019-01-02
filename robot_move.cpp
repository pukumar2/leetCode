/* Run time 16 ms, beats 58.84% */
class Solution {
public:
    bool judgeCircle(string moves) {

        int n = moves.size();

        /* 24 ms , beats 3.54%

        if((count(moves.begin(), moves.end(), 'L') == count(moves.begin(), moves.end(), 'R')) &&
           (count(moves.begin(), moves.end(), 'U') == count(moves.begin(), moves.end(), 'D'))){
            return true;
        }

        return false; */


        if(n == 0){
            return true;
        }

        if(n == 1){
            return false;
        }

        if(n == 2){
            if((moves[0] == 'U' && moves[1] == 'D') ||
               (moves[0] == 'L' && moves[1] == 'R')){
                return true;
            } else {
                return false;
            }
        }

        int k = 0;
        int j = 0;

        for(int i = 0; i < n; i++){
            if(moves[i] == 'U'){
                j += 1;
            }

            else if(moves[i] == 'D'){
                j -= 1;
            }
            else if(moves[i] == 'L'){
                k -= 1;
            }

            else {
                k += 1;
            }
        }

        if(k == 0 && j == 0){
            return true;
        }

        return false;

    }
};
