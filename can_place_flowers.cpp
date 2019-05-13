/* Run time 4ms and beats 100% CPP SUbmissions*/

/// Longer version
class Solution {
public:

    void print_vec(vector<int> vec){
        for(auto it : vec)
            cout << it << " ";

        cout << endl;
    }

    bool canPlaceFlowers(vector<int>& flowerbed, int n) {



        int flowerbed_len = flowerbed.size();
        vector<int> track_vector(flowerbed_len, 0);
        int counter = 0;
        if(flowerbed_len == 1 && flowerbed[0] == 0){
           counter++;
        }

        int i = 0;

        int j = flowerbed_len - 1;

        while(i < flowerbed_len){

            if(flowerbed[i] == 0){
                if(i < flowerbed_len - 1 && flowerbed[i+1] == 0 && i > 0 && flowerbed[i-1] == 0){
                   counter++;
                   flowerbed[i] = 1;
                   i = i+2;
                   continue;
                }
                else if(i == 0 && i < flowerbed_len - 1 && flowerbed[i+1] == 0){
                    flowerbed[i] = 1;
                    counter++;
                    flowerbed[i] = 1;
                    i = i+2;
                    continue;
                }
            }
            i++;
        }

        if(flowerbed_len > 2 && flowerbed[flowerbed_len - 1] == 0 && flowerbed[i-2] == 0){
            counter++;
        }

      /*
        for(int i = 0; i < flowerbed_len; i++){
            if(track_vector[i] == 1){
                counter++;
            }
        } */

        cout << counter << endl;

        return (counter >= n);

    }
};

/* Shorter version */
bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int possible = 0;
        if(flowerbed.size() == 0)   return false;

        if(flowerbed.size() == 1){
            if(n == 0)  return true;
            if(n == 1 && flowerbed[0] == 0) return true;
            return false;
        }

        // check first
        if(flowerbed[0] == 0 && flowerbed[1] == 0){
            possible++;
            flowerbed[0] = 1;
        }

        for(int i = 1; i < flowerbed.size() - 1; i++){
            if(flowerbed[i - 1] == 0 && flowerbed[i] == 0 && flowerbed[i + 1] == 0){
                possible++;
                flowerbed[i] = 1;
            }
        }

        // check last
        if(flowerbed[flowerbed.size() - 2] == 0 && flowerbed[flowerbed.size() - 1] == 0){
            possible++;
            flowerbed[flowerbed.size() - 1] = 1;
        }

        if(possible >= n)   return true;
        return false;
    }

