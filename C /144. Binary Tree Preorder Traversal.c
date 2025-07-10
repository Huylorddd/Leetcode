/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void preOrder(struct TreeNode* root, int* result, int* returnSize) {
    if (root == NULL) return;

    result[(*returnSize)++] = root->val;          // take value of the node firstly before moving to the child-nodes.
    preOrder(root->left, result, returnSize);
    preOrder(root->right, result, returnSize);
}

int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    int* result = malloc(101 * sizeof(int));
    if (!result) return NULL;
    *returnSize = 0;

    preOrder(root, result, returnSize);

    return result;
}
