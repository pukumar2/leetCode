/* Run time 200ms and beats 100% of CPP Submissions */
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {

        vector<vector<int> > res;

        int n = points.size();
        map<double, int> m;

        for(int i = 0; i < n; i++){
            int mi = points[i].size();
            int sqrt_num = 0;
            for(int j = 0; j < mi; j++){
                sqrt_num += pow(points[i][j], 2);
            }
            pair<double, int> p;
            p = make_pair(sqrt(sqrt_num), i);
            m.insert(p);
        }

        int t = 0;
        for(auto it = m.begin(); it != m.end(); it++){
            if(t < k){
                res.push_back(points[it->second]);
                t++;
            }
        }

        return res;

    }
};
