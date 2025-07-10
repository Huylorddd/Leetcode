/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxDepth(struct TreeNode* root) {
    if (root == NULL) return 0;

    int leftDepth = maxDepth(root->left);                             // traverse to the most left.
    int rightDepth = maxDepth(root->right);                           // traverse to the most right.
    return (leftDepth > rightDepth) ? leftDepth + 1 : rightDepth + 1; // check max(left, right) to see which side is deeper then increase its depth backwardly till the root.
}
