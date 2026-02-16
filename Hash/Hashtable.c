#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define SIZE 10
struct Node{
    int key;
    int value;
    struct Node *next;
    
};
struct Noe *hashtable[SIZE];

int hashfunction(int key){
    return key % SIZE;
}
struct Node *createnode(int key,int value){
    struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));

    if(newnode == NULL){
        printf("memory allocation failed");
        return NULL;
    }
    newnode->key = key;
    newnode->value = value;
    newnode->next = NULL;

    return newnode;
}

void insert(int key ,int value){
    int index = hashfunction(key);
    struct Node *newnode = createnode(key,value);
    newnode->next = hashtable[index];
    hashtable[index] = newnode;
}
void intialization(){
    for(int i = 0; i < SIZE; i++){
        hashtable[i] = NULL;

    }

}
int main(){

}