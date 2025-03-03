//1290

#include <stdio.h>

struct ListNode
{
    int val;
    struct ListNode* next;
};

// easy way to change any number to any base system 
int getDecimalValue(struct ListNode* head) {
    int result = 0;
    while (head != NULL) {
        result = result*2 + head->val;
        head = head->next;
    }
    return result;
}