//Rotate Array
//Rotate an array of n elements to the right by k steps.

//For example, with n = 7 and k = 3, the array [1,2,3,4,5,6,7] is rotated to [5,6,7,1,2,3,4]

class Solution {
public:
    void rotate(int nums[], int n, int k) {
        k = k % n;
        if(n <= 1 || k <= 0){
            return;
        }
        reverse(nums, 0, n-k-1);
        reverse(nums, n-k, n-1);
        reverse(nums, 0, n-1);
    }
    void reverse(int nums[], int st, int end){
        int i = st, j = end;
        while(i<j){
            swap(nums[i], nums[j]);
            i++;j--;
        }
    }
};