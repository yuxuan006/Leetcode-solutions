//Leetcode c++
//Invert Binary Tree  

/**
 Invert a binary tree.
 
     4
   /   \
  2     7
 / \   / \
1  3  6   9
 to
     4
   /   \
  7     2
 / \   / \
9   6 3   1
 */
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(!root)return NULL;
        //recursive
        /*
         invertTree(root->left);
         invertTree(root->right);
         TreeNode *temp = root->left;
         root->left = root->right;
         root->right = temp;
         */
        //iterative, BFS
        queue<TreeNode*> q;
        q.push(root);
        while(q.empty() == false){
            
            TreeNode *cur = q.front();
            q.pop();
            
            TreeNode *temp = cur->left;
            cur->left = cur->right;
            cur->right = temp;
            
            if(cur->left)q.push(cur->left);
            if(cur->right)q.push(cur->right);
            
        }
        return root;
    }
    
};