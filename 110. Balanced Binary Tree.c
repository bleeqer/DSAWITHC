/**
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int solution(struct TreeNode* root)
{
    if (root == NULL)
    {
        return 0; // 빈 노드는 높이가 0
    }

    int leftHeight = solution(root->left);   // 왼쪽 서브트리 높이 계산
    int rightHeight = solution(root->right); // 오른쪽 서브트리 높이 계산

    // 균형이 맞지 않거나 서브트리의 높이 차이가 1보다 크면 -1 반환
    if (leftHeight == -1 || rightHeight == -1 || abs(leftHeight - rightHeight) > 1)
    {
        return -1;
    }

    // 현재 노드의 높이를 반환 (서브트리 중 더 큰 높이에 1 추가)
    return fmax(leftHeight, rightHeight) + 1;
}

bool isBalanced(struct TreeNode* root) 
{
    if (root == NULL)
    {
        return true; // 빈 트리는 균형 잡힌 상태
    }
    if (solution(root) == -1)
    {
        return false; // 트리가 균형이 맞지 않음
    }
    return true; // 트리가 균형 잡혀 있음
}
