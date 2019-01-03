/* Run time 4ms, beats 66% of CPP Submission */

class Solution {
public:
    
    bool check(int original){
        int num = original;
        while( num != 0) {
            int temp{num%10};
            if ((temp == 0) || (original % temp)) return false;
            num /= 10;
        } 
        return true;
    }

    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i = left; i <= right; i++){
            if (check(i)) ans.push_back(i);
        }
        return ans;
    }
};
