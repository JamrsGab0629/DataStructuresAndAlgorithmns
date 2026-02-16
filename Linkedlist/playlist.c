#include <stdio.h>
#include <stdlib.h>

struct Node{
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
    struct Node *insertatbeginning(struct Node *head,int value){
        struct Node *newnode = createnode(value);


        newnode->next = head;
        head = newnode;
        return head;
    }
    void deleteatpos(struct Node *head,int pos){
        if(head == NULL && pos <= 0){
            return;
        }
        struct Node *temp = head;
        if(pos == 1){
            head = head->next;
            free(temp);
        }

        for(int i = 1; i < pos - 1; i++){
            temp = temp->next;
        }
        if(temp == NULL || temp->next == NULL){
            return;
        }
        struct Node *current = temp->next;
        temp->next = current->next;
        free(current);
    }
    int getlegth(struct Node *head){
        int legth = 0;
        struct Node *temp = head;
        while(temp != NULL){
            legth++;
            temp = temp->next;
        }
        return legth;
    }
    struct Node *insertatpos(struct Node *head,int value,int pos){
        struct Node *newnode = createnode(value);

       


        if(pos <= 1 || head == NULL){
            return insertatbeginning(head , value);
        }
struct Node *temp = head;
int i = 1;
        while (i < pos - 1 && temp != NULL) {
    temp = temp->next;
    i++;
}

       
        struct Node *current = temp->next;
        newnode->next = current;
        temp->next = newnode;
        return head;
    }
int main(){
 
}