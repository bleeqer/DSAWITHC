/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) 
{
    // 빈 리스트인 경우, 중복 제거가 필요 없으므로 그대로 반환
    if (head == NULL)
    {
        return head;
    }

    struct ListNode* prev = head;  // 중복 검사를 위한 이전 노드 포인터
    struct ListNode* curr = head->next;  // 현재 노드 포인터

    // 리스트를 끝까지 순회
    while (curr != NULL)
    {
        if (prev->val == curr->val)  // 현재 노드의 값이 이전 노드와 동일하면 중복
        {
            prev->next = curr->next;  // 이전 노드의 다음을 현재 노드의 다음으로 연결
            curr = curr->next;  // 현재 노드를 다음 노드로 이동
            continue;  // 다음 반복으로 이동
        }

        // 중복이 없는 경우, 이전 노드를 현재 노드로 이동
        prev = curr;
        curr = curr->next;  // 현재 노드를 다음 노드로 이동
    }

    return head;  // 수정된 리스트의 시작 노드 반환
}
