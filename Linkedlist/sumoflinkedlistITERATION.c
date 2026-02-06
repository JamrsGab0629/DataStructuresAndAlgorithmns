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
int sumiterative(struct Node *head){
int sum = 0;
    while(head != NULL){
        sum += head->data;
        head = head->next;
    }
    return sum;
}
int main(){

    struct Node *head = NULL;

    head = createnode(11);
    head->next = createnode(90);
    head->next->next = createnode(10);

    int result = sumiterative(head);

    struct Node *temp = head;
    while(temp != NULL){
        printf("%d->",temp->data);
        temp = temp->next;
    }
    printf("\n%d ",result);

}