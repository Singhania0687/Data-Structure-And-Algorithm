# include<iostream>
using namespace std;
// implementing a binary tree
struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x):val(x),left(NULL),right(NULL){}
};

// depth of a node from root
int depth(TreeNode *root,TreeNode *p){
    if(root==NULL)
           return 0;
           if(root==p)
              return 1;
              int lh=depth(root->left,p);
              int rh=depth(root->right,p);
              if(lh||rh)
                   return 1+max(lh,rh);
                   return 0;
}
// Mirror Image of the Tree
TreeNode* Inversion(TreeNode* root)
{
    if(root==NULL)
         return NULL;
         TreeNode* lh=Inversion(root->left);
         TreeNode* rh=Inversion(root->right);
         root->left=rh;
         root->right=lh;
         return root;
}
int Maximum(TreeNode* root){
    if(root==NULL)
              return INT_MIN;
              int lh=Maximum(root->left);
              int rh=Maximum(root->right);
              return max(root->val,max(lh,rh));
}
// Left Viw
void LeftView(TreeNode* root, vector<int>& ans, int level = 0) {
    if (root == nullptr) return;

    if (level == ans.size())
        ans.push_back(root->val);  // first node of this level

    LeftView(root->left, ans, level + 1);
    LeftView(root->right, ans, level + 1);
}
// Right View
void RightView(TreeNode* root, vector<int>& ans, int level = 0) {
    if (root == nullptr) return;

    if (level == ans.size())
        ans.push_back(root->val);  // first node of this level

   
    RightView(root->right, ans, level + 1);
     RightView(root->left, ans, level + 1);
}

// 

int main(){

}
