// linked list include two things, (1).data and (2).pointer
// also a kind of struct

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};
// ** is a pointer that points to a indicator
void insert(struct node **head, int value) {
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = value;
    new_node->next = *head;
    *head = new_node;
}

void display(struct node *head) {
    struct node *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct node *head = NULL;

    insert(&head, 10);
    insert(&head, 20);
    insert(&head, 30);

    display(head);

    return 0;
}

