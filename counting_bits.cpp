/* Run time 64ms and beats 100% CPP Submissions */
class Solution {
public:
    vector<int> countBits(int num) {

        vector<int> res;
        for(int i = 0; i <= num; i++){
            bitset<32>foo(i);
            res.push_back(foo.count());
        }

        return res;
    }
};
