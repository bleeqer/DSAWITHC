/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxDepth(struct TreeNode* root)
{
    if (root == NULL) // 노드가 NULL이면 깊이는 0
    {
        return 0;
    }

    int maxLeft = maxDepth(root->left);    // 왼쪽 서브트리의 최대 깊이 계산
    int maxRight = maxDepth(root->right); // 오른쪽 서브트리의 최대 깊이 계산
    return fmax(maxLeft, maxRight) + 1;   // 더 큰 깊이에 1을 더해 현재 노드 깊이 반환
}
