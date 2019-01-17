/* Run time 256ms and beats 92% of CPP Submissions */
class Solution {
public:
    struct comparator {
    bool operator()(const pair<int, int>& a, const pair<int, int>& b) const {
        return a.second < b.second;
    }
};

    int distributeCandies(vector<int>& candies) {
         map<int, int> m;
        unordered_set<int> c(candies.begin(), candies.end());
        int n = candies.size();
       /* vector<int> res;


        for(int i = 0; i < n; i++){
            auto it = m.find(candies[i]);
            if(it != m.end()){
                it->second++;
            }
            else {
                m.emplace(candies[i], 1);
            }
        }

        vector<int> res2;*/

        if(c.size() <= n/2){
            return c.size();
        } else {

            return candies.size()/2;
        }

        return 0;
    }
};
