//206

#include <stdio.h>

struct ListNode
{
    int val;
    struct ListNode* next;
};


struct ListNode* reverseList(struct ListNode* head) {
    // new start
    struct ListNode* new_head = NULL;
    while (head != NULL) {
        // to define every node
        struct ListNode* new_node = (struct ListNode*)malloc(sizeof(struct ListNode));
        // get the value head is pointing at
        new_node->val = head->val;
        // make the value point to our new linked list
        new_node->next = new_head;
        // update linked list
        new_head = new_node;
        head = head->next;
    }
    return new_head;
}

struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* prev = NULL;
    struct ListNode* curr = head;
    while (curr != NULL) {
        struct ListNode* nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    return prev;
}