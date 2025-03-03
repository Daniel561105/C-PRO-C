//2

#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int carry = 0;
    struct ListNode* result = NULL;
    while (l1 != NULL || l2 != NULL || carry != 0) {
        int sum = carry;
        if (l1 != NULL) {
            sum += l1->val;
            l1 = l1->next;
        }
        if (l2 != NULL) {
            sum += l2->val;
            l2 = l2->next;
        }
        carry = sum / 10;
        struct ListNode* new_node = (struct ListNode*)malloc(sizeof(struct ListNode));
        new_node->val = sum % 10;
        new_node->next = result;
        result = new_node;
    }
    struct ListNode* prev = NULL;
    struct ListNode* curr = result;
    while (curr != NULL) {
        struct ListNode* next_node = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next_node;
    }
    return prev;
}


// thought it will work but sadly it didn't
/*
struct ListNode* reverse (struct ListNode* head) {
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

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* newl1 = reverse(l1);
    struct ListNode* newl2 = reverse(l2);
    long int n1 = 0, n2 = 0;
    while (newl1 != NULL) {
        n1 = n1*10 + newl1->val;
        newl1 = newl1->next;
    }
    while (newl2 != NULL) {
        n2 = n2*10 + newl2->val;
        newl2 = newl2->next;
    }
    int sum = n1 + n2;
    struct ListNode* result = NULL;
    if (sum == 0) {
        struct ListNode* new_node = (struct ListNode*)malloc(sizeof(struct ListNode));
        new_node->val = 0;
        new_node->next = result;
        result = new_node;
        return result;
    }
    while (sum != 0) {
        struct ListNode* new_node = (struct ListNode*)malloc(sizeof(struct ListNode));
        new_node->val = sum % 10;
        new_node->next = result;
        result = new_node;
        sum /= 10;
    }
    struct ListNode* answer = reverse(result);
    return answer;
}*/

