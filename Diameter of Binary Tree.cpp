// q->https://leetcode.com/problems/diameter-of-binary-tree/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        
        
        int ans=0;
        MaxdepthOfBinaryTree(root,ans);
        return ans;
    }
    
    int MaxdepthOfBinaryTree(TreeNode* root,int &ans) {
        
        if(root==NULL)return 0;
        
        int x=MaxdepthOfBinaryTree(root->left,ans);
        int y=MaxdepthOfBinaryTree(root->right,ans);
        
        ans=max(ans,x+y);
        return 1+max(x,y);
        
    }
};
