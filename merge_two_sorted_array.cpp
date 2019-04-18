/* Recursive method */
class Solution {
public:

   void print_vec(vector<int> res){
       for(int i = 0; i < res.size(); i++){
           cout << res[i] << " ";
       }
       cout << endl;
   }

   void helper(vector<int> nums1, vector<int> nums2, int start1,
               int start2, int end1, int end2, vector<int>& res){

       if(start1 >= end1 && start2 >= end2){
           return;
       }

       else if(start2 < end2 && start1 >= end1){
           for(int i = start2; i < end2; i++){
               res.push_back(nums2[i]);
           }
           return;
       }

       else if(start2 >= end2 && start1 < end1){
           for(int i = start1; i < end1; i++){
               res.push_back(nums1[i]);
           }
           return;
       }

       else if(nums1[start1] <= nums2[start2]){
           res.push_back(nums1[start1]);
           start1++;
       }
       else {
           res.push_back(nums2[start2]);
           start2++;
       }

       helper(nums1, nums2, start1, start2, end1, end2, res);
   }

    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
         vector<int> res;
         int total = nums1.size();
         helper(nums1, nums2, 0, 0, m, n, res);
        // print_vec(res);
         nums1.clear();
         nums1 = res;
    }
};

/* Run time 4ms, beats 100% CPP Submissions */

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int one = m-1;
        int two = n-1;
       
        int mergepos = one + two + 1;
        
        while(one >= 0 && two >= 0){
            if(nums1[one] > nums2[two]){
                nums1[mergepos--] = nums1[one--];
            } 
            else {
                nums1[mergepos--] = nums2[two--];
            }
        }
        
        
       /* while (one >= 0 && two >= 0) {
            if (nums1[one] > nums2[two])
                nums1[mergepos--] = nums1[one--] ;
            else 
                nums1[mergepos--] = nums2[two--];
        }*/
        
        while(two >= 0){
            nums1[mergepos--] = nums2[two--];
        }
      
      
      /*
        int one = m - 1, two = n - 1;
        int mergePos = two + one + 1;
        
        while (one >= 0 && two >= 0) {
            if (nums1[one] > nums2[two])
                nums1[mergePos--] = nums1[one--] ;
            else 
                nums1[mergePos--] = nums2[two--];
        }
        
        while (two >= 0)
            nums1[mergePos--] = nums2[two--];
        */
    }
};
