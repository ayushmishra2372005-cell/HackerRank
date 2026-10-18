# Abstract Classes - Polymorphism

![Difficulty](https://img.shields.io/badge/Difficulty-Hard-red)

## Problem

Abstract base classes in C++ can only be used as base classes. Thus, they are allowed to have virtual member functions without definitions.

A cache is a component that stores data so future requests for that data can be served faster. The data stored in a cache might be the results of an earlier computation, or the duplicates of data stored elsewhere. A cache hit occurs when the requested data can be found in a cache, while a cache miss occurs when it cannot. Cache hits are served by reading data from the cache which is faster than recomputing a result or reading from a slower data store. Thus, the more requests that can be served from the cache, the faster the system performs.

One of the popular cache replacement policies is: "least recently used" (LRU). It discards the least recently used items first.

For example, if a cache with a capacity to store 5 keys has the following state(arranged from most recently used key to least recently used key) -

	5 3 2 1 4
    
Now, If the next key comes as 1(which is a cache hit), then the cache state in the same order will be -

	1 5 3 2 4

Now, If the next key comes as 6(which is a cache miss), then the cache state in the same order will be -

	6 1 5 3 2

You can observe that 4 has been discarded because it was the least recently used key and since the capacity of cache is 5, it could not be retained in the cache any longer.

**Given an abstract base class *Cache* with member variables and functions**: <br/>

*mp* - Map the key to the node in the linked list<br/>
*cp* - Capacity<br/>
*tail* - Double linked list tail pointer<br/>
*head* - Double linked list head pointer<br/>
*set()* - Set/insert the value of the key, if present, otherwise add the key as the most recently used key. If the cache has reached its capacity, it should replace the least recently used key with a new key.<br/>
*get()* - Get the value (will always be positive) of the key if the key exists in the cache, otherwise return -1.<br/>

You have to write a class *LRUCache* which extends the class *Cache* and uses the member functions and variables to implement an LRU cache.

**Input Format**

First line of input will contain the $N$ number of lines containing $get$ or $set$ commands followed by the capacity $M$ of the cache.<br>
The following $N$ lines can either contain $get$ or $set$ commands.<br>
An input line starting with $get$ will be followed by a $key$ to be found in the cache. An input line starting with $set$ will be followed by the $key$ and $value$ respectively to be inserted/replaced in the cache.

**Constraints**  
$1 <= N <= 500000$  
$1 <= M <= 1000$  
$1 <= key <= 20$  
$1 <= value <= 2000$  

**Constraints**

 

**Output Format**

The code provided in the editor will use your derived class *LRUCache* to output the value whenever a get command is encountered.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-18T19:34:53.832Z  

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

[View on HackerRank](https://www.hackerrank.com/challenges/abstract-classes-polymorphism/problem)