/* Run time 4ms and beats 100% of CPP submissions */
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        int n = nums1.size();
        int m = nums2.size();
        vector<int> res;

        map<int, int> mi;
        for(int i = 0; i < n; i++){
            mi.emplace(nums1[i], i);
        }

        for(int i = 0; i < m; i++){
            auto it = mi.find(nums2[i]);
            if(it != mi.end()){
                if(find(res.begin(), res.end(), nums2[i]) == res.end())
                    res.push_back(nums2[i]);
            }
        }

        return res;

    }
};
