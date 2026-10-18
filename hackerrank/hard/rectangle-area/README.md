# Abstract Classes - Polymorphism

![Difficulty](https://img.shields.io/badge/Difficulty-Hard-red)

## Problem

In this challenge, you are required to compute the area of a rectangle using classes. 

Create two classes:

**Rectangle**	

The *Rectangle* class should have two data fields-*width* and *height* of *int* types. The class should have *display()* method, to print the *width* and *height* of the rectangle separated by space.

**RectangleArea**

The *RectangleArea* class is derived from *Rectangle* class, i.e., it is the sub-class of *Rectangle* class. The class should have *read\_input()* method, to read the values of *width* and *height* of the rectangle. The *RectangleArea* class should also overload the *display()* method to print the area $\left(\texttt{width} \times \texttt{height}\right)$ of the rectangle.

**Input Format**

The first and only line of input contains two space separated integers denoting the width and height of the rectangle.  

**Constraints**

- $1 \le {width}, {height} \le 100$

**Output Format**

The output should consist of exactly two lines:		
In the first line, print the *width* and *height* of the rectangle separated by space.  
In the second line, print the *area* of the rectangle.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-18T19:34:57.051Z  

```cpp
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

// 1. Structure representing a single element in our Doubly Linked List
struct Node {
   Node* next;
   Node* prev;
   int value;
   int key;
   Node(Node* p, Node* n, int k, int val): prev(p), next(n), key(k), value(val) {}
   Node(int k, int val): prev(NULL), next(NULL), key(k), value(val) {}
};

// 2. Abstract Base Class specifying required object tracking layout
class Cache {
   protected: 
   map<int,Node*> mp; // Maps tracking key identifiers directly to memory node pointers
   int cp;            // Maximum capacity limit of the cache system
   Node* tail;        // Points to the absolute end boundary node (Least Recently Used)
   Node* head;        // Points to the absolute front boundary node (Most Recently Used)
   virtual void set(int, int) = 0; // Pure virtual definition placeholder
   virtual int get(int) = 0;       // Pure virtual definition placeholder
};

// 3. Derived Class containing custom logic implementation operations
class LRUCache : public Cache {
public:
    // Constructor to instantiate boundary targets safely
    LRUCache(int capacity) {
        cp = capacity;
        head = NULL;
        tail = NULL;
    }

    // Helper method to move a recently accessed node straight to the front position
    void moveToHead(Node* node) {
        if (node == head) return; 

        // If the node is sitting at the tail edge, shift the tail backward
        if (node == tail) {
            tail = tail->prev;
            if (tail) tail->next = NULL;
        } else {
            // Snip connections safely from structural center zones
            node->prev->next = node->next;
            node->next->prev = node->prev;
        }

        // Attach to the head pointer destination target space cleanly
        node->next = head;
        node->prev = NULL;
        if (head) head->prev = node;
        head = node;

        // Fix tracking if it's the lone single item inside the application state
        if (!tail) tail = head;
    }

    // Fetch value associated with target key identifier bounds
    int get(int key) override {
        auto it = mp.find(key);
        if (it == mp.end()) {
            return -1; // Cache miss condition met
        }
        
        Node* node = it->second;
        moveToHead(node); // Move to head because it was recently accessed
        return node->value;
    }

    // Insert new item or refresh an old object capacity marker
    void set(int key, int value) override {
        if (cp <= 0) return;

        // Case A: Key already present inside current structures
        auto it = mp.find(key);
        if (it != mp.end()) {
            Node* node = it->second;
            node->value = value; 
            moveToHead(node);    
            return;
        }

        // Case B: Element is completely fresh, initialize a new block allocation
        Node* new_node = new Node(key, value);

        if ((int)mp.size() >= cp) {
            // Cache full restriction reached! Wipe the oldest items from the tail
            if (tail) {
                Node* old_tail = tail;
                mp.erase(old_tail->key); // Remove track marker record entry from map lookup
                
                tail = tail->prev;
                if (tail) {
                    tail->next = NULL;
                } else {
                    head = NULL; 
                }
                delete old_tail; // Free application storage allocations securely
            }
        }

        // Drop the newly processed item straight into the first element tracking zone
        if (!head) {
            head = tail = new_node;
        } else {
            new_node->next = head;
            head->prev = new_node;
            head = new_node;
        }

        mp[key] = new_node; // Save mapping pointer position location tracking item
    }
};

// 4. Primary Input Parsing and Evaluation Loop Execution Engine
int main() {
    // Read total operations limit and initialization boundary sizes
    int n, capacity;
    cin >> n >> capacity;
    
    // Instantiate concrete tracking instantiation structures
    LRUCache l(capacity);
    
    for(int i = 0; i < n; i++) {
        string command;
        cin >> command;
        if(command == "get") {
            int key;
            cin >> key;
            cout << l.get(key) << endl;
        } else if(command == "set") {
            int key, value;
            cin >> key >> value;
            l.set(key, value);
        }
    }
    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/rectangle-area/problem)