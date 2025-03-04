//24

#include <stdio.h>

struct ListNode
{
    int val;
    struct ListNode* next;
};

struct ListNode* swapPairs(struct ListNode* head) {
    if (head == NULL || head->next == NULL) return head;;
    struct ListNode* first = head;
    struct ListNode* second = head->next;
    first->next = swapPairs(second->next);
    second->next = first;
    return second;
}

// it is a recursive way to solve it
// the main key is second->next = first and first->next = second->next will only do one change
// to traverse the whole linked list, we need recursion