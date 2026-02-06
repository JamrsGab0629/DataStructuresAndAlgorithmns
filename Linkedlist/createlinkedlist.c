#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};
int getlegth(struct Node *head){
    int legth = 0;
    while(head){
        legth++;
        head = head->next;
    }
    return legth;
}
int getmiddle(struct Node *head){
    int leght = getlegth(head);

    int mid = leght / 2;
    while (mid--)
    {
        head = head->next;
    }
    return head->data;
    
}
struct Node *createnode(int value){
    struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));

    if(newnode == NULL){
        printf("Memory alloc failed");
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

int sumiteration(struct Node *head){
    int sum = 0;
    while(head != NULL){
        sum += head->data;
        head = head->next;
    }
    return sum;

}
int recursivesum(struct Node *head){
    if(head == NULL){
        return 0;
        
    }
    return head->data + recursivesum(head->next);
}

int main(){
struct Node *head = NULL;

head = createnode(10);
head->next = createnode(11);
head->next = createnode(80);
InsertAtEnd(&head,90);
InsertAtBeginning(&head,8);
InsertAtEnd(&head,67);
InsertAtEnd(&head,77);

printf("%d\n", getmiddle(head));
int result = sumiteration(head);
struct Node *temp = head;
while(temp != NULL){
    printf("%d->",temp->data);

    temp = temp->next;
}
printf("%d",result);

}