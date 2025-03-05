//61

#include <stdio.h>

struct ListNode
{
    int val;
    struct ListNode* next;
};

// make the last one point to the first one and let 
// the one who points to the last one point to NULL
struct ListNode* move (struct ListNode* head) {
    struct ListNode* prev = NULL;
    struct ListNode* curr = head;
    // prev will be the second last and curr will be the last
    while (curr->next) {
        prev = curr;
        curr = curr->next;
    }
    prev->next = NULL;
    curr->next = head;
    head = curr;
    return head;
}

struct ListNode* rotateRight(struct ListNode* head, int k) {
    int size = 0;
    struct ListNode* temp = head;
    while (temp != NULL) {
        temp = temp->next;
        size += 1;
    }
    if (size == 0) return head;
    int count = k % size;
    while (count > 0) {
        head = move(head);
        count -= 1;
    }

    return head;
}