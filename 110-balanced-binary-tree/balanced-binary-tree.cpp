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
    int height(TreeNode* root) {
        if(root == nullptr)return 0;
         queue<TreeNode*> q;
         q.push(root);
         int h = 0;
         while(!q.empty()) {
            int size = q.size();
            for(int i  = 0; i < size; i++) {
                TreeNode* node = q.front();
                q.pop();
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
            }
            h++;
         }
         return h;
    }
    
    bool isBalanced(TreeNode* root) {
        queue<TreeNode*> s;
        if(root == nullptr)return true;
        int diff = height(root->left) - height(root->right);
        if(diff < -1 || diff > 1) {
            return false;
        }
        else {
            return isBalanced(root->left) && isBalanced(root->right);
        }
        return true;
    }
};