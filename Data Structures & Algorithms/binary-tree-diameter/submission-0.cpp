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
        int max_diameter=0;
        calculateheight(root,max_diameter);
        return max_diameter;

    }

    int calculateheight(TreeNode* node,int &max_diameter){
        if(node==nullptr){
            return 0;
        }

        int leftheight=calculateheight(node->left,max_diameter);
        int rightheight=calculateheight(node->right,max_diameter);

        max_diameter=max(max_diameter,leftheight+rightheight);
        return max(leftheight,rightheight)+1;
    }
};
