//21

#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode dummy;
    dummy.next = NULL;
    struct ListNode * cur = &dummy;
    while (list1 != NULL && list2 != NULL) {
        // compare elements and put the smaller one in the linked list
        if (list1->val > list2->val) {
            cur->next = list2;
            list2 = list2->next;
        }
        else {
            cur->next = list1;
            list1 = list1->next;
        }
        cur = cur->next;
    }
    if (list1 == NULL) {
        cur->next = list2;
    }
    else if (list2 == NULL) {
        cur->next = list1;
    }
    return dummy.next;
}