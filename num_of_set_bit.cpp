/* Run time 8ms and beats 96% of CPP Submissions */
class Solution {
public:
    int hammingWeight(uint32_t n) {

        bitset<32> foo(n);

        return foo.count();

    }
};
