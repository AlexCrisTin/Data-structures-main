#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data, score;
    struct node *next;
}node;
int main(){
    node *newnode, *head =NULL , *tail = NULL;
    int n,x;
    scanf("%d %d", &n,&x);
    for(int i = 0; i < n;i++){
        newnode = malloc(sizeof(node));
        scanf("%d %d", &newnode->data,&newnode->score);
        newnode->next=NULL;
        if(head == NULL){
            head = newnode;
            tail = newnode;
        } else{
            tail->next = newnode;
            tail = newnode;
        }
    }

    node *cur = head;
    while(cur!=NULL){
        if(cur->data == x){
            printf("%d", cur->score);
        }
        cur= cur->next;
    }
}