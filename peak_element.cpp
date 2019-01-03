/* Run time 16ms, beats 100% for CPP Submissions */
class Solution {
public:

    int find_pivot(vector<int>& arr, int start, int end, int n){

        int mid = (start + end)/2;

        if((mid == 0 || arr[mid] >= arr[mid - 1]) &&
           (mid == n-1 || arr[mid] >= arr[mid+1])){
               return mid;
           }

        else if(mid > 0 && arr[mid-1] > arr[mid]){
            return find_pivot(arr, start, (mid-1), n);
        }

        return find_pivot(arr, (mid+1), end, n)
;
    }

    int peakIndexInMountainArray(vector<int>& A) {

        int n = A.size();

        /*if(n == 0){
            return 0;
        }

        if(n == 1){
            return 1;
        }*/

        int pivot = find_pivot(A, 0, n-1, n);

        return pivot;
    }
};
