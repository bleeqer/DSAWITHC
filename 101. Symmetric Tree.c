/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isEqual(struct TreeNode* root1, struct TreeNode* root2)
{
    if (root1 != NULL && root2 != NULL) // 두 노드가 모두 NULL이 아닌 경우
    {
        if (root1->val == root2->val) // 현재 노드 값이 같으면 대칭 확인
        {
            return isEqual(root1->left, root2->right) && isEqual(root1->right, root2->left);
        }
        return false; // 값이 다르면 대칭 아님
    }
    else if (root1 == NULL && root2 == NULL) // 두 노드가 모두 NULL인 경우 대칭
    {
        return true;
    }
    return false; // 한쪽만 NULL이면 대칭 아님
}

// 트리가 대칭인지 확인하는 메인 함수
bool isSymmetric(struct TreeNode* root) 
{
    return isEqual(root->left, root->right); // 루트의 좌우 서브트리 대칭 확인
}
