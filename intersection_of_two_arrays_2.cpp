/* Run time 4ms and beats 100% of CPP Submissions */
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

        int n = nums1.size();
        int m1 = nums2.size();

        vector<int> res;
        map<int, int> m;

        for(int i = 0; i < n; i++){
            auto it = m.find(nums1[i]);
            if(it != m.end()){
                it->second++;
            } else {
                m.emplace(nums1[i], 1);
            }
        }

        for(int i = 0; i < m1; i++){
            auto it = m.find(nums2[i]);
            if(it != m.end()){
                res.push_back(nums2[i]);
                it->second--;
                if(it->second == 0){
                    m.erase(nums2[i]);
                }
            }
        }

        return res;
    }
};
