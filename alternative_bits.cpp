/* Run time 4ms and beats 95% of CPP Submissions */
bool hasAlternatingBits(int n) {
        long long m = n >> 1;
        return ((m + n) & (m + n + 1)) == 0;
    }

