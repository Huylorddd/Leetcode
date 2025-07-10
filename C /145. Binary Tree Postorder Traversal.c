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
void postOrder (struct TreeNode* root, int* result, int* returnSize) {
    if (root == NULL) return;

    postOrder(root->left, result, returnSize);
    postOrder(root->right, result, returnSize);
    result[(*returnSize)++] = root->val;          // after moving to the last node, we begin to take its value node by node till the root.
}

int* postorderTraversal(struct TreeNode* root, int* returnSize) {
    int* result = malloc(101 * sizeof(int));
    if (!result) return NULL;
    *returnSize = 0;

    postOrder(root, result, returnSize);

    return result;
}
