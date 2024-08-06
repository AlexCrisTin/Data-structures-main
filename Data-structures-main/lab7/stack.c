#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}node;
void push(node** top, int data){
    node* newnode = malloc(sizeof(node));
    newnode->data=data;
    newnode->next=*top;
    *top = newnode;
}
int pop(node** top){
    node* temp = *top;
    int popped = temp->data;
    *top=(*top)->next;
    free(temp);
    return popped;
}
int isEmpty(node* top){
    return top == NULL;
}
int main(){
    node* top = NULL;
    int n, m;
    scanf("%d %d", &n,&m);
    for(int i =0;i<n;i++){
        int ele;
        scanf("%d",&ele);
        push(&top, ele);
    }
    for(int i = 0 ; i < m;i++){
        if(!isEmpty(top)){
            pop(&top);
        }
    }
    node* temp_top = NULL;
    while(!isEmpty(top)){
        push(&temp_top, pop(&top));
    }
    while(!isEmpty(temp_top)){
        printf("%d ", pop(&temp_top));
    }
}