/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int minDepth(struct TreeNode* root) 
{
    if (root == NULL) // 노드가 NULL이면 깊이는 0
    {
        return 0;
    }

    int leftDepth = minDepth(root->left);   // 왼쪽 서브트리의 최소 깊이 계산
    int rightDepth = minDepth(root->right); // 오른쪽 서브트리의 최소 깊이 계산

    if (root->left == NULL) // 왼쪽 자식이 NULL이면 오른쪽 서브트리 깊이 사용
    {
        return rightDepth + 1;
    }
    else if (root->right == NULL) // 오른쪽 자식이 NULL이면 왼쪽 서브트리 깊이 사용
    {
        return leftDepth + 1;
    }

    return fmin(leftDepth, rightDepth) + 1; // 두 서브트리 중 더 작은 깊이에 1 추가
}
