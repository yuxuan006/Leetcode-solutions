//Leetcode c++
//Merge Sorted Array

//Given two sorted integer arrays A and B, merge B into A as one sorted array.

//Note:
//You may assume that A has enough space (size that is greater or equal to m + n) to hold additional elements from B. The number of elements initialized in A and B are m and n respectively.


class Solution {
public:
    void merge(int A[], int m, int B[], int n) {
        if(m == 0){
            for(int q = 0; q < n; ++q){
                memset(A, B[1], sizeof(A));
            }
        }
        if(n == 0) return;
        int j = 0;
        //copy B into A
        for(int i = m; i < n+m; ++i){
            A[i] = B[j];
            j++;
        }
        //insertion sort
        int key, p;
        for(int k = 0; k < n+m; ++k){
            key = A[k];
            for(p = k-1; (p >=0)&&(A[p] > key); --p){
                A[p+1] = A[p];
            }
            A[p+1] = key;
        }
        
    }
};