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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int aLen = 0, bLen = 0; // 각 리스트의 길이 계산용 변수
        ListNode* ACopy = headA;
        ListNode* BCopy = headB;

        while (ACopy != NULL) { // 리스트 A의 길이 계산
            aLen++;
            ACopy = ACopy->next;
        }

        while (BCopy != NULL) { // 리스트 B의 길이 계산
            bLen++;
            BCopy = BCopy->next;
        }

        int diff = abs(aLen - bLen); // 두 리스트 길이 차이 계산

        if (aLen > bLen) { // 길이가 긴 리스트를 diff만큼 앞으로 이동
            for (int i = 0; i < diff; i++) {
                headA = headA->next;
            }
        } else {
            for (int i = 0; i < diff; i++) {
                headB = headB->next;
            }
        }

        for (int i = 0; i < min(aLen, bLen); i++) { // 교차점 찾기
            if (headA == headB) {
                return headA; // 교차점 반환
            }
            headA = headA->next;
            headB = headB->next;
        }

        return NULL; // 교차점이 없으면 NULL 반환
    }
};
