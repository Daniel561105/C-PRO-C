//19

#include <stdio.h>

struct ListNode
{
    int val;
    struct ListNode* next;
};

struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    int size = 0;
    struct ListNode* test = head;
    while (test != NULL) {
        test = test->next;
        size++;
    }
    if (size == 1) return NULL;
    if (size == 2) {
        if (n == 1) {
            head->next = NULL;
            return head;
        }
        else if (n == 2) {
            head = head->next;
            return head;
        }
    }
    if (size == n) {
        head = head->next;
        return head;
    }
    int target = size - n + 1; // the one that should be remove
    struct ListNode* temp = head;
    int count = 1;
    while (temp != NULL && temp->next != NULL) {
        count++;
        if (count == target) {
            temp->next = temp->next->next;
        }
        else {
            temp = temp->next;
        }
        
    }
    return head;
}