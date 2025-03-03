//203

#include <stdio.h>

struct ListNode 
{
    int val;
    struct ListNode* next;
};

struct ListNode* removeElements(struct ListNode* head, int val) {
    while (head != NULL && head->val == val) {
        head = head->next;
    }
    // have to use a pointer to do operations so that it won't change head
    struct ListNode* temp = head;
    while (temp != NULL && temp->next != NULL) {
        if (temp->next->val == val) {
            temp->next = temp->next->next;
        }
        else {
            temp = temp->next;
        }
    }
    return temp;
}