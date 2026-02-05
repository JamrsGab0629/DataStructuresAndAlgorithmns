#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

int getlegth(struct Node *head){
    int legth = 0;
    while(head != NULL){
        legth++;
        head = head->next;
    }
    return legth;
}
int getmiddle(struct Node *head){
    int legth = getlegth(head);
    
    int mid = legth / 2;
    while(mid--){
        head = head->next;

    }
    return head->data;
}
struct Node *createnode(int value){
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));

    if(newnode == NULL){
        printf("memory alloc failed");
        return NULL;
    }
    newnode->data =value;
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
int sumiterativesum(struct Node *head){
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

struct Node *reverselinked(struct Node *head){
    struct Node *curr = head;
    struct Node *prev = NULL;
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
    struct Node *head = NULL;

    InsertAtEnd(&head,10);
    InsertAtEnd(&head,20);
    InsertAtEnd(&head,30);

    head = reverselinked(head);

    struct Node *temp = head;
    
    while(temp != NULL){
        printf("%d->",temp->data);
        temp = temp->next;
    }
int middle = getmiddle(head);
printf("\nThe Middle is = %d ",middle);
int result1 = sumiterativesum(head);
 int result2 = recursivesum(head);
printf("\n");
 printf("%d = iterative\n",result1);
 printf("%d = recursive",result2);
}