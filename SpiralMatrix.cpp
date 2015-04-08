//Leetcode c++
//Spiral Matrix
/*
 Given a matrix of m x n elements (m rows, n columns), return all elements of the matrix in spiral order.
 
 For example,
 Given the following matrix:
 
 [
 [ 1, 2, 3 ],
 [ 4, 5, 6 ],
 [ 7, 8, 9 ]
 ]
 You should return [1,2,3,6,9,8,7,4,5].
*/

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int> > &matrix) {
        vector <int> res;
        int size1 = matrix.size();
        if(size1 == 0)return res;
        int size2 = matrix[0].size();
        int top =0, left = 0;
        int right = size2 -1, bottom = size1-1;
        while(true){
            for(int i = left; i <= right; i++){
                res.push_back(matrix[top][i]);
            }
            top++;
            if(top > bottom || left > right){
                break;
            }
            for(int i = top; i <= bottom; i++){
                res.push_back(matrix[i][right]);
            }
            right--;
            if(top > bottom || left > right){
                break;
            }
            for(int i = right; i >= left; i--){
                res.push_back(matrix[bottom][i]);
            }
            bottom--;
            if(top > bottom || left > right){
                break;
            }
            for(int i = bottom; i >= top; i--){
                res.push_back(matrix[i][left]);
            }
            left++;
            if(top > bottom || left > right){
                break;
            }
        }
        return res;
    }
    
};