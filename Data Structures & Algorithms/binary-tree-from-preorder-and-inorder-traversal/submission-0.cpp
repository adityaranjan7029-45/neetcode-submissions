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
    int preorderindex=0;
    unordered_map <int,int> inordermap;
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for(int i=0;i<inorder.size();i++){
            inordermap[inorder[i]]=i;
        }
        return build(preorder,0,inorder.size()-1);
    }


    TreeNode* build(vector<int> &preorder,int inorderstart,int inorderend){
        if(inorderstart>inorderend){
            return NULL;
        }

        int rootvalue=preorder[preorderindex];
        preorderindex++;

        TreeNode* root=new TreeNode(rootvalue);
        int rootindex=inordermap[rootvalue];

        root->left=build(preorder,inorderstart,rootindex-1);
        root->right=build(preorder,rootindex+1,inorderend);

        return root;

    }
};
