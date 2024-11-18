/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool hasPathSum(struct TreeNode* root, int targetSum) 
{
    if (root == NULL) // 노드가 NULL이면 경로 없음
    {
        return false;
    }

    // 현재 노드가 리프 노드인 경우, targetSum과 값 비교
    if (root->left == NULL && root->right == NULL)
    {
        return targetSum == root->val;
    }

    // 왼쪽 및 오른쪽 서브트리에서 targetSum - root->val 값 확인
    bool leftSum = hasPathSum(root->left, targetSum - root->val);
    bool rightSum = hasPathSum(root->right, targetSum - root->val);

    return leftSum || rightSum; // 어느 한쪽이라도 true면 true 반환
}
