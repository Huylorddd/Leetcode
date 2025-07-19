/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    if (p == NULL && q == NULL) {   // both tree are empty -> true
        return true;
    }

    if (p != NULL && q != NULL && p->val == q->val) {   // if both tree are 'not empty' and their 'root' are the same.
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);  // if both are true -> true.
    }

    return false;
}
