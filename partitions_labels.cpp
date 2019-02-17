/* Run time 8ms and beats 100% CPP Submissions */
/* This questions teaches you a method to look back into the string */
class Solution {
public:
    vector<int> partitionLabels(string str) {

        int n = str.size();
        vector<int> v;

        if(n == 0){
            return v;
        }

        vector<pair<int, int> > res(26, {-1, -1});

        for(int i = 0; i < n; i++){
            auto x = str[i] - 'a';
            if(res[x].first == -1){
                res[x].first = i;
                res[x].second = i;
            }else {
                res[x].second = max(res[x].second, i);
            }
        }

        int l = INT_MAX;
        int r = -INT_MAX;
        for(int i = 0; i < str.size(); i++){

            auto x = str[i]-'a';

            l = min(l, res[x].first);
            r = max(r, res[x].second);

            if(i == r){
                v.push_back(r-l+1);
                l = INT_MAX;
                r = -INT_MAX;
            }

        }



        return v;
    }
};
