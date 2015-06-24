//Leetcode c++
//Convert Sorted Array to Binary Search Tree
/*
 Given an array where elements are sorted in ascending order, convert it to a height balanced BST.
*/
 
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* createBST(vector<int>& nums, int st, int e){
        if(st>e)return NULL;
        int mid = (st+e)/2;
        TreeNode *root = new TreeNode(nums[mid]);
        root->left = createBST(nums, st, mid-1);
        root->right = createBST(nums, mid+1, e);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int len = nums.size();
        if(len == 0)return NULL;
        
        return createBST(nums, 0, len-1);
    }
    
};