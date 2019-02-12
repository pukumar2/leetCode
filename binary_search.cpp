/* Run time 0ms and beats 98% CPP SUbmissions */
class Solution {
public:

    int helper(vector<int>& nums, int start, int end, int target){

        if(start > end){
            return -1;
        }



        int mid = (start + end) / 2;

        if(nums[mid] == target){
            return mid;
        }

        if(target > nums[mid]){
            return helper(nums, mid+1, end, target);
        }

        return helper(nums, 0, mid-1, target);
    }

    int search(vector<int>& nums, int target) {

        int n = nums.size();

        if(n == 0){
            return -1;
        }

        if(n == 1 && nums[0] == target){
            return 0;
        }

        return helper(nums, 0, n-1, target);
    }
};
