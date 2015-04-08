//Leetcode c++
//Balanced Binary Tree
/*
 Given a binary tree, determine if it is height-balanced.
 
 For this problem, a height-balanced binary tree is defined as a binary tree in which the depth of the two subtrees of every node never differ by more than 1.
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
    int maxDepth(TreeNode *p){
        if(p == NULL)return 0;
        return max(maxDepth(p->left)+1, maxDepth(p->right)+1);
    }
    bool isBalanced(TreeNode *root) {
        if(root == NULL)return true;
        if(root->left == NULL && root->right == NULL)return true;
        int l = maxDepth(root->left);
        int r = maxDepth(root->right);
        if(abs(l-r)<=1){
            return isBalanced(root->left)&&isBalanced(root->right);
        }
        return false;
    }
    
};