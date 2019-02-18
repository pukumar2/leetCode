/* Run time 12ms and beats 100% CPP Submissions */
class Solution {

public:
    vector<int> pancakeSort(vector<int>& A) {
        vector<int> v;
        help(A,v);
        return v;
    }

    void help(vector<int>& A, vector<int>& res){
        if(A.size()<1) return;
        int i = max_element(A.begin(), A.end()) - A.begin();
        res.push_back(i+1);
        reverse(A.begin(), A.begin() + i + 1);
        reverse(A.begin(), A.end());
        res.push_back(A.size());
        A.pop_back();
        help(A, res);
    }
};


