#include <stdio.h>

struct Node {
int data;
struct Node *next;
};

struct Node *createnode(int value){
    struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));

    if(newnode == NULL){
        printf("memory alllocation failed");
        return NULL;
    }
    newnode->data = value;
    newnode->next = NULL;
    return newnode;
}
struct Node *reverselinked(struct Node *head){
    struct Node *prev = NULL;
    struct Node *curr = head;
    struct Node *next;

    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;

    }
    return prev;
}
int main(){

}
