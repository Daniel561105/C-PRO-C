//83

#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode* next;
};

struct ListNode* deleteDuplicates(struct ListNode* head) {
    if (head == NULL) return head;
    struct ListNode* temp = head;
    while (temp->next) {
        if (temp->val == temp->next->val) {
            temp->next = temp->next->next;
        }
        else {
            temp = temp->next;
        }
    }
    return head;
}