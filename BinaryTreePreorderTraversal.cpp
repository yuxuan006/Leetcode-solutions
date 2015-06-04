//Leetcode c++
//Binary Tree Preorder Traversal
/*
 Given a binary tree, return the preorder traversal of its nodes' values.
 
 For example:
 Given binary tree {1,#,2,3},
 1
  \
   2
  /
 3
 return [1,2,3].
 
 Note: Recursive solution is trivial, could you do it iteratively?
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
    /*
     //recursive
     vector<int> preorderTraversal(TreeNode* root) {
     if(root == NULL)return result;
     
     result.push_back(root->val);
     
     if(root->left != NULL){
     preorderTraversal(root->left);
     }
     if(root->right != NULL){
     preorderTraversal(root->right);
     }
     return result;
     }
     private:
     vector<int> result;
     */
    
    //iteration using stack
    vector<int> preorderTraversal(TreeNode* root){
        vector<int> result;
        stack<TreeNode *> s;
        if(!root)return result;
        s.push(root);
        
        while(s.empty() == false){
            TreeNode *temp = s.top();
            
            s.pop();
            result.push_back(temp->val);
            //push right child first(LIFO principle)
            if(temp->right){
                s.push(temp->right);
            }
            if(temp->left){
                s.push(temp->left);
            }
        }
        return result;
        
    }
    
};