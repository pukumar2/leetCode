/* RUn time 0ms and beats 100% of CPP SUbmissions */
class Solution {
public:


    bool isLongPressedName(string name, string typed) {

         vector<int> v(26, 0);
         int flag = 0;
         int n = name.length();
         int m = typed.length();

         if(n == 0 || m == 0){
             return false;
         }

        int i = 0;
        int j = 0;

        while(i < n){

            if(name[i] == typed[j]){
                i++;
                j++;
            }
            else {
                j++;
                if(i <= name.size() && j >= typed.size()){
                    return false;
                }
            }

        }

        return true;

    }
};
