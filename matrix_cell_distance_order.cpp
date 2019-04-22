/* Run time 132ms and beats 52% CPP Submissions */
class Solution {
public:
    
    void print_res(vector<vector<int>> res){
        
        for(int i = 0; i < res.size(); i++){
            for(int j = 0; j < res[i].size(); j++){
                cout << res[i][j] << " ";
            }
            cout << "\n";
        }
        
        
    }
    
    vector<vector<int>> allCellsDistOrder(int R, int C, int r0, int c0) {
        
        vector<vector<int>> res;
        unordered_map<int, vector<vector<int>>> m;
        
        for(int i = 0; i < R; i++){
            for(int j = 0; j < C; j++){
                m[abs(i - r0) + abs(j - c0)].push_back({i, j});
            }    
        }
        
        int distance = 0;
        while(m.find(distance) != m.end()){
            
             for(auto it : m[distance]){
                 res.push_back(it);
             }
            distance++;
        }
        
        
    
        return res;
        
    }
};
