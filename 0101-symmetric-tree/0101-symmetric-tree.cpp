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
    bool e=0;
    bool inorder(TreeNode* l,TreeNode* r){
        if(l==NULL && r==NULL){
            return 1;
        }
        if(l==NULL){
            e=1;return 0;
        }
        if(r==NULL){
            e=1;return 0;
        }
        inorder(l->left,r->right);
        if(l->val!=r->val){
            e=1;
            return 0;
        }
        inorder(l->right,r->left);
        return 1;
    }
    bool isSymmetric(TreeNode* root) {
        TreeNode* l=root->left;
        TreeNode* r=root->right;
        e=0;
        inorder(l,r);
        if(e==1){
            return 0;
        }
        return 1;
    }
};