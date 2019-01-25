/* Run time 8ms and beats 99.21% of CPP Submissions */
class Solution {
public:

    void print_arr(vector<int> arr){
        int n = arr.size();

        for(int i = 0; i < n; i++){
            cout << arr[i] << "\t" << i << "\n";
        }
        cout << "\n";
    }

    string shortestCompletingWord(string txt, vector<string>& words) {

        vector<int> pat(26, 0);

        int m = txt.length();
        int n = words.size();

        if(m == 0 || n == 0){
            return "";
        }


        for(int i = 0; i < m; i++){
            if(isalpha(txt[i])){
                pat[(int)tolower(txt[i]) - 'a'] += 1;
            }
        }

        int final_len = 0;
        int index = -1;
        for(int i = 0; i < n; i++){
            int j = 0;
            vector<int> n(pat);


            while(j < words[i].length()){
                  if(isalpha(tolower(words[i][j]))){
                      if(n[(int)tolower(words[i][j]) - 'a'] > 0)
                         n[(int)tolower(words[i][j]) - 'a'] -= 1;
                  }
                j++;
            }


            bool zeros = std::all_of(n.begin(), n.end(), [](int p) { return p==0; });
            if(zeros == 1){
                if(final_len > words[i].length() || final_len == 0){

                   final_len = words[i].length();
                   index = i;
                }
            }


        }

        if(index != -1){
            return words[index];
        }
         return "";

    }
};
