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

int getlegth(struct Node *head){
int legth = 0;

while(head != NULL){
    legth++;
    head = head->next;
}

return legth;
}
int getmid(struct Node *head){
    int legth = getlegth(head);

    int mid = legth / 2;
    while(mid--){
        head = head->next;
    }
    return head->data;
}
int main(){

    struct Node *head = NULL;

    head= createnode(10);
    head->next = createnode(20);
    head->next->next = createnode(30);

    int result = getmid(head);

    printf("%d",result);
}