#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *createnode(int value){
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));

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
    }

    
    for(int i = 1; i <= pos - 1; i++){
        temp = temp->next;
    }
        if (temp == NULL || temp->next == NULL) {
            return head;}


    struct Node *current = temp->next;
    temp->next = current->next;
    free(current);

    return head;
    
    

}

int main(){
struct Node *head = NULL;

head = createnode(10);
head->next = createnode(90);
head->next->next = createnode(44);
head->next->next->next = createnode(12);
head = deletenode(head,4);
struct Node *temp = head;
while (temp != NULL && temp->next != NULL){
    printf("%d->",temp->data);
    temp = temp->next;

}


}