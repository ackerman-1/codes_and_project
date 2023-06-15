// Given the root of a Binary Search Tree(BST),
//     return the minimum absolute difference between the values of any two different nodes in the tree.
// Input: root = [4,2,6,1,3]
// Output: 1
// Input: root = [1,0,48,null,null,12,49]
// Output: 1
// aka minimum distance between BST nodes
// code
//
//
//
///
// /*
//  * Definition for a binary tree node.
//  * struct TreeNode
//  {
//      *int val;
//      *TreeNode *left;
//      *TreeNode *right;
//      *TreeNode() : val(0), left(nullptr), right(nullptr){} * TreeNode(int x) : val(x), left(nullptr), right(nullptr){} * TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right){}
//                                                                                                                                                                                                     *
//  };
//  * /
//      class Solution
//  {
//  public:
//      int min_dif = INT_MAX;
//      int val = -1;
//      int getMinimumDifference(TreeNode *root)
//      {
//          if (root->left != NULL)
//              getMinimumDifference(root->left);
//          if (val >= 0)
//              min_dif = min(min_dif, root->val - val);
//          val = root->val;
//          if (root->right != NULL)
//              getMinimumDifference(root->right);
//          return min_dif;
//      }
//  };
// //
// //
// //