/* Run time 8ms and beats 80% of CPP Submissions */
class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {

        int n = words.size();

        if(n == 0){
            return false;
        }

        if(n == 1){
            return true;
        }

        unordered_map<char, int> m_order;

        for(int i = 0; i < order.length(); i++){
            m_order.emplace(order[i], i);
        }

        vector<int> curr;
        vector<int> prev;

        for(int i =0; i < n; i++){
            curr.clear();
            for(int j = 0; j < words[i].length(); j++){
                curr.push_back(m_order[words[i][j]]);
            }
            if(prev > curr){
                return false;
            }
            prev = curr;

        }

        return true;
    }
};
