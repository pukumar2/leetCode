/* Run time 8ms and faster than 94% of CPP Submissions */
class Solution {
public:

    char smallest_of_letters(vector<char>& letters){

        string small = "z";
        int n = letters.size();
         for(int i = 0; i < n; i++)
        {
            if(letters[i] < small[0]){
                small[0] = letters[i];
            }
         }

        return small[0];
    }

    char nextGreatestLetter(vector<char>& letters, char target) {


        int n = letters.size();
        string res = " ";
        if(n == 2){
            if(letters[0] > target && letters[1] <= target){
                return letters[0];
            }
            else if(letters[1] >= target && letters[0] < target){
                return letters[1];
            }
            else {
                return smallest_of_letters(letters);
            }
        }

        int flag = 0;
        string min_res = "z";
        for(int i = 0; i < n; i++)
        {
            /*if(min_res[0] < letters[i]){
                min_res[0] = letters[i];
            }*/

            if(flag == 0 && target < letters[i])
            {
                res[0] = letters[i];
                flag = 1;
            }

            else if(flag == 1 && target < letters[i] && res[0] > letters[i]){
                res[0] = letters[i];
            }
        }

        // cout << res[0] << " " << flag << "\n";

        if(flag == 0){
            return smallest_of_letters(letters);
        }
        else {

        }
        cout << res[0] << " " << flag << "\n";
        return res[0];
    }
};
