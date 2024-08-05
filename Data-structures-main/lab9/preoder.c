#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *left, *right;
}node;
node* newnode(int data){
    node* temp = (node*)malloc(sizeof(node));
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}
node* insert(node* root, int data){
    if(root == NULL) return newnode(data);
    if(data <root->data)
        root->left = insert(root->left, data);
    else if(data>root->data)
        root->right = insert(root->right, data);
    return root;
}
void preorder(node* root){
    if(root!=NULL){
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
int main(){
    int n;
    scanf("%d", &n);
    node* root = NULL;
    for(int i = 0;i <n; i++){
        int val;
        scanf("%d", &val);
        root= insert(root, val);
    }

    preorder(root);

}