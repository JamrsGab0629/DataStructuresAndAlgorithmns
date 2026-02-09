#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *right;
    struct Node *left;
    
};

struct Node *createnode(int value){
    struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));
if(newnode == NULL){
    printf("memory alocation failed ");
    return NULL;
}


    newnode->data = value;
    newnode->right = NULL;
    newnode->left = NULL;
    return newnode;
}
void printtree(struct Node *root){
    if(root != NULL){

        printf("%d ",root->data);
        printtree(root->left);
        
 printtree(root->right);
    }
}
struct Node *insert(struct Node *root,int x){
    if(root == NULL){
        return createnode(x);
    }
    if(x < root->data){
        root->left = insert(root->left,x);
    }
    else{
        root->right = insert(root->right,x);
    }
    return root;
}
int countleaves(struct Node *root){
    if(root == NULL){
        return 0;
    }
    if(root->left == NULL && root->right == NULL){
        return 1;
    }
    return countleaves(root->left) + countleaves(root->right);
}
int main(){

    struct Node *root = createnode(10);

    root->left = createnode(11);
    root->right = createnode(90);
   
printtree(root);
int result = countleaves(root);
printf("\n%d",result);
}