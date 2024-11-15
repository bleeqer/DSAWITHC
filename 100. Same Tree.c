/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isSameTree(struct TreeNode* p, struct TreeNode* q) 
{
    if (p == NULL && q == NULL) // 두 노드가 모두 NULL인 경우 동일한 트리
    {
        return 1;
    }

    if (p == NULL || q == NULL) // 한쪽만 NULL인 경우 다른 트리
    {
        return 0;
    }

    // 현재 노드의 값이 같고, 왼쪽/오른쪽 서브트리가 동일하면 같은 트리
    return (p->val == q->val) && isSameTree(p->left, q->left) && isSameTree(p->right, q->right); 
}
