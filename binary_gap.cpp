/* Shorter code run time 4ms and beats 100% CPP submissions */
class Solution {
public:
    int binaryGap(int N) {

        int n = N;
        int start_index = -1;
        int end_index = -1;
        int max_val = INT_MIN;
        for(int i = 0; i <= 31; i++){
            if(n & (1 << i)){
               if(start_index == -1){
                  start_index = i;
               }
                else if(start_index != -1 && end_index == -1){
                    end_index = i;

                   // cout << end_index << endl;
                   // cout << start_index << endl;

                    max_val = max(max_val, end_index - start_index);
                    start_index = end_index;
                    end_index = -1;
                }
            }
        }

        if(max_val == INT_MIN){
            return 0;
        }

        return max_val;
    }
};

/* Run time 4ms, beats 100% of the CPP Submissions */
class Solution {
public:
    int binaryGap(int N) {

        int n = N;
        int count = 0;

        while(n){
            count++;
            n /= 2;
        }

        int curr_max = 0;
        int final_max = 0;
        int j = 0;

        while(!(N & (1 << j))){
                j++;
        }

        if(j == count-1){
            return 0;
        }

        for(int i = j; i < count; i++){

            if(N & (1 << i)){
                cout << "i is " << i << "\n";
                final_max = max(curr_max, final_max);
                curr_max = 0;
            }
            else {
                curr_max++;
            }
        }

        return final_max+1;
    }
};
