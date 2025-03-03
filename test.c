#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

struct ListNode {
    int val;
    struct ListNode * next;
};

// struct ListNode *reverse_list(struct ListNode* head) {

// }

struct ListNode *insert(struct ListNode **head, int value) {
    struct ListNode *new_node = (struct ListNode *)malloc(sizeof(struct ListNode));
    new_node->val = value;
    new_node->next = *head;
    *head = new_node;
}

int main() {
    struct ListNode *abc = NULL;
    *abc = insert(abc,5);
    *abc = insert(abc,4);
    *abc = insert(abc,3);
    *abc = insert(abc,2);
    *abc = insert(abc,1);
    *abc = insert(abc,0);
    
}