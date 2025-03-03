//234

#include <stdio.h>
#include <stdbool.h>

struct ListNode
{
    int val;
    struct ListNode* next;
};

struct ListNode* reverse(struct ListNode* head) {
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

// at first i thought after reversing linked list, i can compare whether head is palindrome or not
// but when i do reverse(), head will be change, which make head has the wrong order
bool isPalindrome(struct ListNode* head) {
    struct ListNode* slow = head;
    struct ListNode* fast = head;
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    struct ListNode* first_half = head;
    struct ListNode* second_half = reverse(slow);
    while (second_half != NULL) {
        if (second_half->val != first_half->val) {
            return 0;
        }
        first_half = first_half->next;
        second_half = second_half->next;
    }
    return 1;
}