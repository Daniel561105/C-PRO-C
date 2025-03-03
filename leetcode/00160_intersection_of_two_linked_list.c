//160

#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode* next;
};

struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    if (headA == NULL || headB == NULL) return 0;
    struct ListNode* up = headA;
    struct ListNode* down = headB;
    // if there isn't a intersection it will still stop because NULL will be the last element
    while (up != down) {
        up = (up == NULL) ? headB : up->next;
        down = (down == NULL) ? headA : down->next;
    }
    return up;
}