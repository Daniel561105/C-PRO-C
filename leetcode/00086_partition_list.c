//86

#include <stdio.h>

struct ListNode
{
    int val;
    struct ListNode* next;
};

// the given x is to seperate the strictly smaller one in the front and the other at behind

struct ListNode* partition(struct ListNode* head, int x) {
    struct ListNode dummy1; // create first linked list
    struct ListNode dummy2; // create second linked list
    dummy1.next = NULL;
    dummy2.next = NULL;
    struct ListNode* small = &dummy1; // small is a pointer points to dummy1
    struct ListNode* large = &dummy2; //
    while (head != NULL) {
        if (head->val < x) {
            small->next = head;
            small = small->next;
        }
        else {
            large->next = head;
            large = large->next;
        }
        head = head->next;
    }
    large->next = NULL;
    small->next = dummy2.next;
    return dummy1.next;
}
