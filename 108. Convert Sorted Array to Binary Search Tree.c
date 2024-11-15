/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* createNode(int* val)
{
    struct TreeNode* newNode = (struct TreeNode*) malloc(sizeof(struct TreeNode)); // 새 노드 메모리 할당
    newNode->val = *val;  // 값 설정
    newNode->left = NULL; // 왼쪽 자식 초기화
    newNode->right = NULL; // 오른쪽 자식 초기화

    return newNode; // 생성된 노드 반환
}

struct TreeNode* helper(int* nums, int start, int end)
{
    if (start > end) // 시작 인덱스가 끝 인덱스를 넘으면 NULL 반환
    {
        return NULL;
    }
    int mid = start + (end - start) / 2; // 중간값 계산
    struct TreeNode* node = createNode(&nums[mid]); // 중간값으로 새 노드 생성
    node->left = helper(nums, start, mid - 1); // 왼쪽 서브트리 생성
    node->right = helper(nums, mid + 1, end);  // 오른쪽 서브트리 생성

    return node; // 생성된 노드 반환
}

struct TreeNode* sortedArrayToBST(int* nums, int numsSize) 
{
    return helper(nums, 0, numsSize - 1); // 재귀 호출 시작
}
