//82

#include <stdio.h>

struct ListNode
{
    int val;
    struct ListNode* next;
};

struct ListNode* deleteDuplicates(struct ListNode* head) {
    if (head == NULL) return head;
    struct ListNode dummy;
    dummy.next = head;
    struct ListNode* temp = &dummy;
    while (temp->next != NULL && temp->next->next != NULL) {
        if (temp->next->val == temp->next->next->val) {
            int dup = temp->next->val;
            while (temp->next != NULL && temp->next->val == dup) {
                temp->next = temp->next->next;
            }
        }
        else {
            temp = temp->next;
        }
    }
    return dummy.next;
}