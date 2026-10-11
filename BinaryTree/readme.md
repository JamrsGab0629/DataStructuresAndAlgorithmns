# 🌳 Binary Tree

![Binary Tree](https://github.com/JamrsGab0629/DataStructuresAndAlgorithmns/blob/6c0e0cb1f3f5ac1903845623d1b5c265b1b28a89/BinaryTree/Introduction-to-Binary-Tree.webp)
*A visual representation of a Binary Tree*

---

## 📌 Overview
A **Binary Tree** is a hierarchical data structure where each node has **at most two children**:
- **Left child**  
- **Right child**

It is widely used in **searching, sorting, expression parsing**, and **hierarchical data representation**.

---

## 🧠 Key Concepts

- **Root** – The topmost node of the tree  
- **Parent / Child** – Relationship between connected nodes  
- **Leaf Node** – Node with no children  
- **Height** – Maximum depth from root to a leaf  
- **Depth** – Distance from root to a specific node  

---

## 🔄 Types of Binary Trees

- **Full Binary Tree** – Every node has 0 or 2 children  
- **Complete Binary Tree** – All levels filled except possibly the last  
- **Perfect Binary Tree** – All internal nodes have 2 children and all leaves at the same level  
- **Binary Search Tree (BST)** – Left subtree < Root < Right subtree  

---

## 🚀 Traversal Methods

### 1️⃣ Depth-First Search (DFS)
- **Preorder** → Root → Left → Right  
- **Inorder** → Left → Root → Right  
- **Postorder** → Left → Right → Root  

### 2️⃣ Breadth-First Search (BFS)
- Level-order traversal (visits nodes level by level)  
- Typically implemented using a **queue**  
- bfs
---

## 💻 Example (C)

```c
#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};


struct TreeNode* newNode(int value) {
    struct TreeNode* node = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    node->val = value;
    node->left = node->right = NULL;
    return node;
}


void inorder(struct TreeNode* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->val);
        inorder(root->right);
    }
}

int main() {
    struct TreeNode* root = newNode(10);
    root->left = newNode(5);
    root->right = newNode(15);

    printf("Inorder traversal: ");
    inorder(root);
    return 0;
}
