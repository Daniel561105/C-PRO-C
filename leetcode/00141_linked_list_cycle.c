//141

#include <stdio.h>
#include <stdbool.h>

struct ListNode
{
    int val;
    struct ListNode* next;
};

bool hasCycle(struct ListNode *head) {
    if (head == NULL || head->next == NULL) return 0;
    struct ListNode* slow = head;
    struct ListNode* fast = head;
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) return 1;
    }
    return 0;
}