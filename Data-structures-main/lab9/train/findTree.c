#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *left,*right;
}node;

 node* newnode(int data){
    node* temp = (node*)malloc(sizeof(node));
    temp->data=data;
    temp->left=temp->right=NULL;
    return temp;
 }
 node* insert(node* root, int data){
    if(root == NULL) return newnode(data);
    if(data<root->data)
        root->left = insert(root->left, data);
    else if(data>root->data)
        root->right= insert(root->right, data);
    return root;
 }
 node* search(node* root, int x){
if(root ==NULL||root->data == x) return root;
if(root->data < x) return search(root->right,x);
return search(root->left,x);
 }
 int main(){
    int n, x;
    scanf("%d", &n);
    node* root = NULL;
    for(int i = 0;i <n; i++){
        int val;
        scanf("%d", &val);
        root= insert(root, val);
    }
    scanf("%d", &x);

    node* result = search(root,x);

    if(result == NULL) {printf("NULL");}
    else{
        if(result->left)
            printf("%d ",result->left->data);
        else
            printf("NULL");
        if(result->right)
            printf("%d ",result->right->data);
        else
            printf("NULL");
    }
    
 }