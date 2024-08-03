#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}node;

int main(){
    node* newnode, *head = NULL, *tail=NULL;
    int n;
    scanf("%d", &n);

    for(int i =0;i <n+1;i++){
        newnode = malloc(sizeof(node));
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if(head == NULL){
            head = newnode;
            tail = newnode;
        } else{
            tail->next = newnode;
            tail = newnode;
        }
    }
    node* cur = head;
    while(cur != NULL){
        printf("%d ", cur->data);
        cur = cur->next;
    }
}