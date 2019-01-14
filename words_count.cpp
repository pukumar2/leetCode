/* Run time 0ms and beats 100% CPP Submissions */
class Solution {
public:
    int countSegments(string s) {

        istringstream ss(s);
        int count = 0;

        while(ss){
            string word;
            ss >> word;
            count++;
        }

        return count-1;

    }
};
