# 🚀 Simple Linked List Implementation in C++  

This project demonstrates a **singly linked list** using **dynamic memory allocation** in C++. It provides functions for adding new nodes and printing the list.  

## 📌 Code Explanation  

### 🏗 Node Structure (`Node` Class)  
- Represents a single node in the linked list.  
- Contains two members:  
  - `int value` – Stores the data.  
  - `Node* next` – Pointer to the next node in the list.  
- Includes two constructors:  
  - A **default constructor** that initializes `value = 0` and `next = nullptr`.  
  - A **parameterized constructor** that initializes `value` with the given data and `next` as `nullptr`.  

### ➕ `AddNewNode()` Function  
- **Prototype:** `Node* AddNewNode(const int& data, Node*& current)`  
- Dynamically creates a new node with the given `data`.  
- Links the new node to the `current` node.  
- Updates `current` to point to the newly added node.  

### 📋 `PrintLinkList()` Function  
- **Prototype:** `void PrintLinkList(Node* current, Node* head)`  
- Starts traversal from `head` and prints each node's `value`.  
- Iterates through the list using a `while` loop until it reaches `nullptr`.  

### 🚀 `main()` Function  
1. Creates the **head node** with an initial value of `1`.  
2. Initializes a `Current` pointer and sets it to `head`.  
3. Calls `AddNewNode()` twice to add nodes with values `2` and `3`.  
4. Calls `PrintLinkList()` to print all node values in the list.  

## 🔥 Features  
✅ **Dynamic Memory Allocation** – Nodes are created using `new`, ensuring efficient memory usage.  
✅ **Easy Traversal** – The list is printed using a loop.  
✅ **Scalable Design** – Can be expanded with functions for **deletion, searching, and reversing**.  

---

