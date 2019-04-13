/* Run time 12ms and beats 100% CPP Submissions */
class Solution {
public:

    void invert(vector<int>& vec){
        int n = vec.size();
        for(int i = 0; i < n; i++){
            if(vec[i]){
                vec[i] = 0;
            }
            else {
                vec[i] = 1;
            }
        }
    }

    void print_vec(vector<int> vec){
        for(int i = 0; i < vec.size(); i++){
            cout << vec[i] << " ";
        }
    }

    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {

        for(auto &vec : A){
            reverse(vec.begin(), vec.end());
            invert(vec);
            //print_vec(vec);
           // cout << "\n+++++++++" << endl;
        }

        return A;
    }
};
