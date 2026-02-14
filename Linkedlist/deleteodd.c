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



int main(){
    char *name = malloc(1);
char name[0] = {"james"};
printf("%s",name);
free(name);

}