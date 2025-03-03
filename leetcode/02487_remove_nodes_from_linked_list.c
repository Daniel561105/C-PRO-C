//2487

#include <stdio.h>

struct ListNode
{
    int val;
    struct ListNode* next;
};

struct ListNode* reverse (struct ListNode* head) {
    struct ListNode* prev = NULL;
    struct ListNode*curr = head;
    while (curr != NULL) {
        struct ListNode* next_node = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next_node;
    }
    return prev;
}
// if any element bigger than it at the right side, remove it
struct ListNode* removeNodes(struct ListNode* head) {
    struct ListNode* result = reverse(head);
    // now prev is the reverse linked list
    int max = 0;
    struct ListNode* curr = result;
    while (curr != NULL && curr->next != NULL) {
        if (curr->val > max) {
            max = curr->val;
        }
        if (curr->next->val < max) {
            curr->next = curr->next->next;
        }
        else curr = curr->next;
    }
    return reverse(result);
}