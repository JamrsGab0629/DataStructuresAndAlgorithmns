#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *left;
    struct Node *right;
    
};

struct Node *createnode(int value){
    struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));
    if(newnode == NULL){
        printf("memory allocation failed");
        return NULL;
    }
    newnode->data = value;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode; 
}
int counttleaves(struct Node *root){
    if(root == NULL){
        return 0;
    }
    if(root->right == NULL && root->left == NULL){
        return 1;
    }
    return 1 + counttleaves(root->left) + counttleaves(root->right);
}
void printtree(struct Node *root){

    if(root != NULL){
        printtree(root->left);
        printf("%d ",root->data);
        printtree(root->right);
    }
}
int main(){

    struct Node *root = createnode(11);
    root->right = createnode(90);
    root->left = createnode(10);
printtree(root);
    int result = counttleaves(root);
    printf("\n%d",result);
}