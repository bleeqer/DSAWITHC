/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        // 노드가 없거나 연결 리스트가 1개의 노드만 가진 경우 사이클이 없음
        if (head == NULL || head->next == NULL) {
            return false;
        }

        // 느린 포인터와 빠른 포인터 초기화
        ListNode* slow = head;
        ListNode* fast = head->next;

        // 빠른 포인터가 느린 포인터를 만나기 전까지 반복
        while (fast != slow) {
            // 빠른 포인터가 끝에 도달하면 사이클이 없음
            if (fast->next == NULL || fast->next->next == NULL) {
                return false;
            }

            // 느린 포인터는 한 칸 이동
            slow = slow->next;
            // 빠른 포인터는 두 칸 이동
            fast = fast->next->next;
        }

        // 느린 포인터와 빠른 포인터가 만났다면 사이클 존재
        return true;
    }
};
