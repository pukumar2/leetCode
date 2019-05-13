/* Beats 80% CPP Submissions */
/* THe key take away from this question is to figure out the shortest distance 
 * between two arrays. Pay attention to v1 and v2
 */
class Solution {
public:
    int shortestDistance(vector<string>& words, string word1, string word2) {

        int words_len = words.size();
        unordered_map<string, vector<int>> map_word_index;

        for(int i = 0; i < words_len; i++){
            map_word_index[words[i]].push_back(i);
        }


        vector<int> v1 = map_word_index[word1];
        vector<int> v2 = map_word_index[word2];

        auto it1 = v1.cbegin();
        auto it2 = v2.cbegin();

        int ans = INT_MAX;
        while(it1 != v1.cend() && it2 != v2.cend()){
              ans = min(ans, abs(*it1 - *it2));
              if(*it1 < *it2){
                  it1++;
              }
              else {
                  it2++;
              }
        }

        return ans;
    }
};
