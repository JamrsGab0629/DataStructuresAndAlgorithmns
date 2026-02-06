#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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
int cycle(struct Node *head){
    struct Node *fast = head;
    struct Node *slow = head;

    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
        if(slow == fast){
        return true;
    }
    }
    return false;

}
int main(){
    struct Node *head = NULL;

    head = createnode(10);
    head->next = createnode(90);
    head->next->next = createnode(11);

    if (cycle(head)){
        printf("True");


    }
    else{
        printf("false");
    }


    return 0;

}