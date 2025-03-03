//1721

#include <stdio.h>

struct ListNode
{
    int val;
    struct ListNode* next;
};

// brute force is transfer to array, after operating turn it back

struct ListNode* swapNodes(struct ListNode* head, int k) {
    struct ListNode* temp = head;
    int size = 0;
    while (temp != NULL) {
        size += 1;
        temp = temp->next;
    }
    struct ListNode* first = head;
    for (int i = 1; i < k; i++) {
        first = first->next;
    }
    struct ListNode* second = head;
    for (int i = 1; i < size-k+1; i++) {
        second = second->next;
    }
    int tempv = first->val;
    first->val = second->val;
    second->val = tempv;
    return head;
}