#include <stdio.h>
#include <stdlib.h>

struct Node {
int data;
struct Node *next;
};

struct Node *createnode(int value)
{
 struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));
 if(newnode == NULL){
    printf("memory allocation failed");
    return NULL;
 }
 newnode->data = value;
 newnode->next = NULL;
 return newnode;
}

struct Node *insertatend(struct Node *head,int value){
    struct Node *newnode = createnode(value);
    if(head == NULL){
        return newnode;
            }
    struct Node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newnode;

return newnode;
}
struct Node *insertatbeginning(struct Node *head,int value){
    struct Node *newnode = createnode(value);

    newnode->next = head;
    return newnode;

}
void printlist(struct Node *head){
    struct Node *temp = head;
    while(temp != NULL){
        printf("%d->",temp->data);
        temp = temp->next;

    }
}
struct Node *addnodeatpos(struct Node *head ,int value,int pos){
    struct Node *newnode = createnode(value);

    if(pos == 1){
        return insertatbeginning(head,value);
    }
    
    struct Node *temp = head;
    for(int i = 1; i < pos - 1; i++){
        temp = temp->next;
    }
    struct Node *current = temp->next;
    newnode->next = current;
    temp->next = newnode;
   
    return head;

}

int main(){

    struct Node *head = NULL;

   head = insertatbeginning(head,9);
   head = addnodeatpos(head,67,2);
    head = addnodeatpos(head,8,2);

    printlist(head);

}