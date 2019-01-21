/* Run time 12ms and beats 89% of CPP Submission */
 int countPrimeSetBits(int L, int R) {
        vector<int> vec{ 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31 };
        int count = 0;
        for(int i = L; i <= R; i++){
            bitset<64> b(i);
            int k = b.count();
            if(find(vec.begin(), vec.end(), k) != vec.end()){
                count++;
            }
        }

        return count;

    }
};
