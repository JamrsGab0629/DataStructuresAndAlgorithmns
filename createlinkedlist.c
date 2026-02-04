#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;

};
int getlegth(struct Node *head){
    int leght = 0;

    while(head){
        leght++;
        head = head->next;


    }
    return leght;
}
int getmiddle(struct Node *head){
    int leght = getlegth(head);

    int mid = leght / 2;
    while(mid--){
        head = head->next;
    }
    return head->data;
}
struct Node *createnode(int value){
    struct Node *newnode = ( struct Node*)malloc(sizeof(struct Node));

    if(newnode == NULL){
        printf("memory allocataion failed");
        return NULL;
    }
    newnode->data = value;
    newnode->next = NULL;
    return newnode;
}
void InsertAtEnd(struct Node **head,int value){
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
void InsertAtBeginning(struct Node **head,int value){
    struct Node *newnode = createnode(value);

    newnode->next = *head;
    *head = newnode;

}
int main(){
    struct Node *head = NULL;
    

    head = createnode(11);
    head->next = createnode(2);
    head->next->next = createnode(6);

    struct Node *temp = head;
    while(temp != NULL){
        printf("%d->",temp->data);
        temp = temp->next;
    }

printf("\n");
printf("%d",getmiddle(head));
}