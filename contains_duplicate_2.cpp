/* Run time 24ms and beats 81% CPP Submissions , if you take a closer look,
 * map and unordered_set has same code and logic but just because unordered_set
 * is a container which gives us an average of O(1) to fetch the item, this is why
 * it is fast
 */
int n = nums.size();

          if(n == 0 || n == 1){
              return false;
          }

          unordered_set<int> m;
          for(int i = 0; i < n; i++){
              auto it = m.find(nums[i]);
              if(it != m.end()){
                  return true;
              }else {
                  m.emplace(nums[i]);
              }
          }

          return false;

/* Run time 36 ms and beats 27% Of cpp submissions */
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

         int n = nums.size();

          if(n == 0 || n == 1){
              return false;
          }

          map<int, int> m;
          for(int i = 0; i < n; i++){
              auto it = m.find(nums[i]);
              if(it != m.end()){
                  return true;
              }else {
                  m.emplace(nums[i], i);
              }
          }

          return false;
    }
};
