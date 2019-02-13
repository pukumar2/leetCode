/* Run time 132 ms and it beats 67% of CPP Submissions */
class Solution {
public:
    int findLHS(vector<int>& nums) {

        int max_elem = INT_MIN;
        unordered_map<int,int> storage;
        for(auto i:nums) storage[i]++;

        for(auto it = storage.begin(); it != storage.end(); it++){
            cout << it->first << "\t";
            cout << it->second << "\n";
        }


        for(auto i:nums) {
            if(storage[i+1]){
                if(max_elem < (storage[i] + storage[i+1])){
                    max_elem = (storage[i] + storage[i+1]);
                }


               // max=max>(storage[i]+storage[i+1])?max:storage[i]+storage[i+1];
            }
        }

        if(max_elem > 0){
            return max_elem;
        }

        return 0;

        //return max>0?max:0; // cap it at 0
    }
};
