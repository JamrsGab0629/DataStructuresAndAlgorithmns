#include <stdio.h>
#include <stdlib.h>


struct Node{
    int data;
    struct Node *next;
};


struct Node *createnode(int value){
    struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));
   
    if(newnode == NULL){
        printf("memory allocation failed");
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
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newnode;
}

int main(){
  
struct Node *head = NULL;

InsertatEnd(&head,10);
InsertatEnd(&head,12);
InsertatEnd(&head,70);


struct Node *temp = head;
while(temp != NULL){
    printf("%d->",temp->data);
    temp = temp->next;
}

    
}