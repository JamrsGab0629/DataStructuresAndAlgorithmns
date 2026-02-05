#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *createnode(int value){
    struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));

    if(newnode == NULL){
        printf("memory alloc failed");
        return NULL;
    }
    newnode->data = value;
    newnode->next = NULL;
    return newnode;
}

struct Node *deletemid(struct Node *head){
    if(head->next == NULL){
        return NULL;
    }
    int count = 0;
    struct Node *p1 = head;
    struct Node *p2 = head;

    while(p1 != NULL){
        count++;
        p1 = p1->next;
    }

    int mid = count / 2;
    for(int i = 0; i < mid - 1; i++){
        p2 = p2->next;
    }
    p2->next = p2->next->next;
    return head;
    
}
int main(){
    struct Node *head = NULL;

    head = createnode(11);
    head->next = createnode(22);
    head->next->next = createnode(88);

    head = deletemid(head);

    struct Node *temp = head;
    while(temp != NULL){
        printf("%d->",temp->data);
        temp = temp->next;
    }

}