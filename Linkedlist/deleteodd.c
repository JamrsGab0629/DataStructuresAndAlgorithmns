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

struct Node *deleteodd(struct Node *head){
    if(head->data % 2 != 0){
        struct Node *temp = head;
        head = head->next;
        free(temp);
        
    }
    struct Node *current = head;
    struct Node *prev = NULL;

    while(current != NULL){
        if(current->data % 2 != 0){
            struct Node *temp = current;
        
        if(prev == NULL){
            head = current->next;
        }
        else {
            prev->next = current->next;
        }
        current = current->next;
        free(temp);
      
    }
    else{
        prev = current;
        current = current->next;
    }
    }
  return head;  
}



int main(){
  struct Node *head = NULL;

head = createnode(4);
head->next = createnode(5);

head = deleteodd(head);

struct Node *temp = head;
while(temp != NULL){
    printf("%d",temp->data);
    temp = temp->next;

}
}