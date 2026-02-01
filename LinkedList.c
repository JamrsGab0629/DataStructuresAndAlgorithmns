#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};
struct Node *createnode(int value){
    struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));

    if(newnode == NULL){
        printf("memry allocation failed");
        return NULL;
    }
    newnode->data = value;
    newnode->next = NULL;
    return newnode;
}
void InsertatEnd(struct Node **head,int value){
    struct Node *newnode = createnode(value);

    if(*head == NULL){
        *head = newnode;
        return;
    }
    struct Node *temp = *head;
    while(temp->next!= NULL){
        temp = temp->next;
       
    }
        temp->next = newnode;
}
void InsertAtBeginning(struct Node **head,int value){
    struct Node *newnode = createnode(value);

    newnode->next = *head;
    *head = newnode;
}

struct Node* reverseIterative(struct Node* head) {
    struct Node* prev = NULL;
    struct Node* current = head;
    struct Node* next = NULL;

    while (current != NULL) {
        next = current->next;  // store next node
        current->next = prev;  // reverse the pointer
        prev = current;        // move prev forward
        current = next;        // move current forward
    }

    return prev; // new head
}


int main(){
  
struct Node *head = NULL;

InsertatEnd(&head,10);
InsertatEnd(&head,12);
InsertatEnd(&head,70);
InsertAtBeginning(&head,1);

head = reverseIterative(head);
struct Node *temp = head;
while(temp != NULL){
    printf("%d->",temp->data);
    temp = temp->next;
}

    
}