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

void solve(struct TreeNode* root, int* result, int* idx)
{
    if (root == NULL) // 노드가 NULL이면 반환
    {
        return;
    }

    solve(root->left, result, idx);       // 왼쪽 서브트리 재귀 호출
    result[*idx] = root->val;            // 현재 노드 값 저장
    *idx += 1;                           // 인덱스 증가
    solve(root->right, result, idx);     // 오른쪽 서브트리 재귀 호출
}

int* inorderTraversal(struct TreeNode* root, int* returnSize) 
{
    int* answer = malloc(100 * sizeof(int)); // 결과 저장 배열 동적 할당
    
    int idx = 0;                            // 결과 배열의 현재 인덱스
    solve(root, answer, &idx);              // 중위 순회 실행
    *returnSize = idx;                      // 총 노드 개수 저장
    return answer;                          // 결과 반환
}
