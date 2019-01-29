/* Run time 68ms and beats 65% of CPP Submissions */
class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {

        int n = list1.size();
        int m = list2.size();

        vector<string> v;

        if(n == 0 || m == 0){
            return v;
        }

        unordered_map<string, int> list1_m;
        unordered_map<string, int> list2_m;

        for(int i = 0; i < n; i++){
            list1_m.emplace(list1[i], i);
        }

        for(int i = 0; i < m; i++){
            list2_m.emplace(list2[i], i);
        }

        vector<string> res;
        int cur_min = INT_MAX;
        for(auto it = list1_m.begin(); it != list1_m.end(); it++){
            auto itr = list2_m.find(it->first);
            if(itr != list2_m.end()){
                int t = itr->second + it->second;
                if(t < cur_min){
                    cur_min = itr->second + it->second;
                    res.clear();
                    res.push_back(it->first);
                } else if((itr->second + it->second) == cur_min){
                    res.push_back(it->first);
                }
            }
        }

        return res;
    }
};

/* Run time 84ms and beats 29% of CPP Submissions */
class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {

        int n = list1.size();
        int m = list2.size();

        vector<string> v;

        if(n == 0 || m == 0){
            return v;
        }

        map<string, int> list1_m;
        map<string, int> list2_m;

        for(int i = 0; i < n; i++){
            list1_m.emplace(list1[i], i);
        }

        for(int i = 0; i < m; i++){
            list2_m.emplace(list2[i], i);
        }

        vector<string> res;
        int cur_min = INT_MAX;
        for(auto it = list1_m.begin(); it != list1_m.end(); it++){
            auto itr = list2_m.find(it->first);
            if(itr != list2_m.end()){
                int t = itr->second + it->second;
                if(t < cur_min){
                    cur_min = itr->second + it->second;
                    res.clear();
                    res.push_back(it->first);
                } else if((itr->second + it->second) == cur_min){
                    res.push_back(it->first);
                }
            }
        }

        return res;
    }
};
