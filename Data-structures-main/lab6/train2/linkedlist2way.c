#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node* next;
    struct node* prev;
}node;

int main(){
    node* newnode, *head = NULL,*tail = NULL;
    int n;
    scanf("%d", &n);
    for(int i = 0; i<n;i++){
        newnode = malloc(sizeof(node));
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        newnode->prev=NULL;

        if(head==NULL){
            head = newnode;
            tail = newnode;
        }else{
            tail->next=newnode;
            newnode->prev=tail;
            tail = newnode;
        }
    }

    node* cur = head;
    while (cur!=NULL)
    {
        printf("%d ", cur->data);
        cur=cur->next;
    }
    printf("\n");
    cur = tail;
    while (cur!=NULL)
    {
        printf("%d ",cur->data);
        cur = cur->prev;
    }
    
}