/* Run time 0ms and beats 100% CPP Submissions */
// Forward declaration of the read4 API.
int read4(char *buf);

class Solution {
public:
    /**
     * @param buf Destination buffer
     * @param n   Number of characters to read
     * @return    The number of actual characters read
     */
    int read(char *buf, int n) {

        int cur = 0;
        char local[4];

        while(int temp = read4(local)){
            if(cur + temp > n){
                temp = n - cur;
            }
            for(int i = 0; i < temp; i++){
                buf[cur + i] = local[i];
            }

            cur += temp;
        }

        return cur;
    }
};
