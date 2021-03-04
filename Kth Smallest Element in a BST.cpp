/**
https://leetcode.com/problems/binary-tree-inorder-traversal
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
 
 //INORDER TRAVERSAL USING STACK
 //TIME COMPLEXITY - O(H+K) 
 //H is the height
 //H can be logn if tree is balanced and N if tree is unbalanced
 
class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        stack<TreeNode*>stk;
        
        while(true)
        {
            while(root!=NULL)
            {
                stk.push(root);
                root=root->left;
            }
            root=stk.top();
            stk.pop();
            k--;
            if(k==0)
                return root->val;
            
            root=root->right;
        }
    }
};
