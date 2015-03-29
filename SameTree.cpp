//Leetcode c++
//Same Tree
/*
 Given two binary trees, write a function to check if they are equal or not.
 
 Two binary trees are considered equal if they are structurally identical and the nodes have the same value.
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
    bool checkVal(TreeNode *p, TreeNode *q){
        if(p == NULL && q == NULL)return true;
        if(p == NULL or q == NULL)return false;
        if(p->val != q->val)return false;
        return checkVal(p->left, q->left)&&checkVal(p->right, q->right);
    }
    bool isSameTree(TreeNode *p, TreeNode *q) {
        return checkVal(p, q);
    }
    
};