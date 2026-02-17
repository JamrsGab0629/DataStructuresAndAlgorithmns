# 📂 Linked List Programs

This folder contains **C programs** demonstrating various **linked list operations**, including inserting, deleting, and traversing nodes.

---

## 📝 Overview

A **linked list** is a linear data structure where each element (node) points to the next.  
It allows **dynamic memory allocation** and efficient insertion/deletion.

**Types of Linked Lists:**
- Singly Linked List
- Doubly Linked List
- Circular Linked List

---

## 🔗 Linked List Visualization

Here’s an example of a **singly linked list**:

![Singly Linked List](https://github.com/JamrsGab0629/DataStructuresAndAlgorithmns/blob/5789762d15b6686439e56b08bd1ad36b2091c82a/Linkedlist/Images/Singlelinkedlist.png)

*Each node contains:*
- `data` → the value stored
- `next` → pointer to the next node

---
c```
#include <stdio.h>
#include <stdlib.h>

// Define a node
struct Node {
    int data;
    struct Node* next;
};

// Create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Insert node at the end
void insertEnd(struct Node** head, int value) {
    struct Node* newNode = createNode(value);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Print linked list
void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Delete a node by value
void deleteNode(struct Node** head, int value) {
    struct Node* temp = *head;
    struct Node* prev = NULL;

    if (temp != NULL && temp->data == value) {
        *head = temp->next;
        free(temp);
        return;
    }

    while (temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) return; // Value not found

    prev->next = temp->next;
    free(temp);
}

int main() {
    struct Node* head = NULL;

    insertEnd(&head, 10);
    insertEnd(&head, 20);
    insertEnd(&head, 30);

    printf("Linked List: ");
    printList(head);

    deleteNode(&head, 20);

    printf("After deletion: ");
    printList(head);

    return 0;
}

```
## ⚡ How to Compile & Run

Compile using **GCC**:

```bash
gcc deletenode.c -o deletenode
./deletenode
