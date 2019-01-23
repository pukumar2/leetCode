/* Run time 304ms and beats 30% of CPP Submissions */
class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {

        int n1 = A.size();
        int n2 = B.size();

        int sum1 = 0, sum2 = 0;
        for(int i = 0; i < n1; i++){
            sum1 += A[i];
        }

        for(int j = 0; j < n2; j++){
            sum2+= B[j];
        }

        int diff = abs(sum1- sum2);
        int candidate = 0;
        vector<int> ans;

        if(sum1 > sum2){
            for(int i = 0; i < n1; i++){
                vector<int>::iterator it;
                it = find(B.begin(), B.end(), A[i] - (diff/2));
                if(it != B.end()){
                   ans.push_back(A[i]);
                   ans.push_back(*it);
                    return ans;
                }
            }
        }
         else {
            for(int i = 0; i < n2; i++){
                vector<int>::iterator it;
                it = find(A.begin(), A.end(), B[i] - (diff/2));
                if(it != A.end()){
                   ans.push_back(*it);
                   ans.push_back(B[i]);
                    return ans;
                }
            }
         }

        return ans;

    }
};

/* Run time 68ms and beats 95% CPP SUbmission. */
class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {


        int dif = (accumulate(A.begin(), A.end(), 0) - accumulate(B.begin(), B.end(), 0)) / 2;
        unordered_set<int> S(A.begin(), A.end());
        for (int b: B)
            if (S.count(b + dif))
                return {b + dif, b};


        return {};
    }
};
