/* Run time 0ms and beats 100 % of CPP Submissions */
class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {

        for(int i = 0 ; i < bits.size() ; )
    {
         if(i == bits.size() - 1)
        {
            return true ;
        }


        if(bits[i] == 0)
        {
            i++ ;
        }
        else
        {
            i = i + 2 ;
        }



    }




    return false ;

    }
};
