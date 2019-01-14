/* Run time 4ms and beats 97.20% of CPP Submissions */
class Solution {
public:
    
    void print_arr(vector<int> res){
        
        for(int i = 0; i < res.size(); i++){
            cout << res[i] << "\t";
        }
        
        cout << "\n";
        
    }
    vector<int> powerfulIntegers(int x, int y, int bound) {
     
        int current = 0;
        vector<int> v;
        
        for(int i=0; pow(x,i)<=bound && !(x==1 && i>0); i++){
            for(int j=0; pow(x,i) + pow(y,j)<=bound && !(y==1 && j>0); j++){
                current = pow(x,i) + pow(y,j);
                if(find(v.begin(), v.end(), current) == v.end()){
                    v.push_back(current);
                }
            }
        }
        
        return v;
        
    }
};
