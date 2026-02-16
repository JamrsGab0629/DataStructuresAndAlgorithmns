#include <stdio.h>
#include <stdlib.h>

struct Node {
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

struct Node *deletenode(struct Node *head,int pos){
    if(head == NULL){
        return NULL;
    }
    struct Node *temp = head;
    if(pos == 1){
        head = head->next;
        free(temp);
        return head;
    }
    for(int i = 1;  temp != NULL && i < pos - 1; i++){
        temp = temp->next;
    }
    if(temp == NULL || temp->next == NULL){
        return head;
    }
   
    struct Node *current = temp->next;
    temp->next = current->next;
    free(current);

    return head;


}

void insertatend(struct Node **head,int value){
    struct Node *newnode = createnode(value);

    if(*head == NULL){
        *head = newnode;
        return;
    }

    struct Node *temp = *head;
    while(temp != NULL && temp->next != NULL){
        temp = temp->next;

    }
    temp->next = newnode;
}

void printlist(struct Node *head){
    struct Node *temp = head;
    while(temp != NULL){
        printf("%d->",temp->data);
        temp = temp->next;


    }
}
int main(){
    struct Node *head = NULL;

    insertatend(&head ,10);
    insertatend(&head ,11);
    insertatend(&head ,12);
    insertatend(&head ,13);
head = deletenode(head,4);
printlist(head);
}