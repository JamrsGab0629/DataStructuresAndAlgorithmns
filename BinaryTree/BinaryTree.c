#include <stdio.h>
#include <stdlib.h>

struct Node {
int data;
struct Node *right;
struct Node *left;
};

struct Node *createnode(int value){
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));

    if(newnode == NULL){
        printf("memory allocation failed");
        return NULL;}
        newnode->data = value;
        newnode->right = NULL;
        newnode->left = NULL;
        return newnode;
    
}
struct Node *insert(struct Node *root,int value){
    struct Node *newnode = createnode(value);

    if(root == NULL){
        return newnode;
    }

    if(value < root->data){
        root->left = insert(root->left,value);
    }
    else{
        root->right = insert(root->right,value);
    }
    return root;
}
void printtree(struct Node *root){
 if(root != NULL){
        printtree(root->left);
        printf("%d ",root->data);
        printtree(root->right);
 }
    
}
struct Node *search(struct Node *root,int input){
   if(root == NULL){
    return NULL;
   }

        if(input == root->data){
            return root;
        }
        else if(input < root->data){
            return search(root->left,input);
        }
        else{
            return search(root->right,input);
        }
        
    
}
int main(){
struct Node *root = NULL;

root = insert(root,10);
insert(root,67);
 insert(root, 5);
 
 struct Node *curr = search(root,67);
if(curr != NULL) {
    printf("Found: %d\n", curr->data);
} else {
    printf("Not found\n");
}
printtree(root);
}