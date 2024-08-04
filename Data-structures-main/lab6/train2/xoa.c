#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}node;
void xoa(node **ptrhead, int index){
    node *cur,*pre;
    if(index==1){
        cur=*ptrhead;
        *ptrhead=cur->next;
        free(cur);
    }else{
        pre=*ptrhead;
        for(int i = 1; i<index-1&&pre!=NULL;i++){
            pre=pre->next;
        }
        if(pre != NULL &&pre->next !=NULL){
            cur=pre->next;
            pre->next = cur->next;
            free(cur);
        }



    }
}
int main(){
    node* newnode, *head=NULL,*tail=NULL;
    int n,x;
    scanf("%d %d",&n,&x);
    for(int i = 0 ; i <n;i++){
        newnode = malloc(sizeof(node));
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if(head == NULL){
            head =newnode;
            tail = newnode;
        }else{
            tail->next = newnode;
            tail = newnode;
        }
    }
    xoa(&head, x);

    node* cur = head;
    while (cur!=NULL)
    
    {
        printf("%d ", cur->data);
        cur = cur->next;
    }
    
}