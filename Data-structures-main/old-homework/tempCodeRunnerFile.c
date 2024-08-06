#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* next;
} node;

int main() {
    node* newnode, *head = NULL;
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        newnode = malloc(sizeof(node));
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        head = newnode;
        newnode->next = head;
    }
    node* cur = head;
    while (cur != NULL) {
        printf("%d ", cur->data);
        cur = cur->next;
    }
    return 0;
}