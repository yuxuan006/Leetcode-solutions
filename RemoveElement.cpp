//Leetcode c++
//Remove Element
/*
 Given an array and a value, remove all instances of that value in place and return the new length.
 
 The order of elements can be changed. It doesn't matter what you leave beyond the new length.
*/
 
class Solution {
public:
    int removeElement(int A[], int n, int elem) {
        int i = n-1, j = 0;
        while (i >= 0) {
            if (A[i] != elem) {
                j++;
                i--;
            }
            else{
                A[i] = A[n-1];
                n = n-1;
                i--;
            }
        }
        return j;
    }
};