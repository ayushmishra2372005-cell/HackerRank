# Inherited Code

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

In this challenge, you are required to handle error messages while working with small computational server that performs complex calculations.  
It has a function that takes $2$ large numbers as its input and returns a numeric result. Unfortunately, there are various exceptions that may occur during execution.

Complete the code in your editor so that it prints appropriate error messages, should anything go wrong. The expected behavior is defined as follows:

- If the *compute* function runs fine with the given arguments, then print the result of the function call.  
- If it fails to allocate the memory that it needs, print `Not enough memory`.  
- If any other standard C++ exception occurs, print `Exception: S` where $S$ is the exception's error message.  
- If any non-standard exception occurs, print `Other Exception`.



**Input Format**

The first line contains an integer, $T$, the number of test cases.  
Each of the $T$ subsequent lines describes a test case as $2$ space-separated integers, $A$ and $B$, respectively.

**Constraints**

$1 \le T \le 10^3$  
$0 \le A, B \le 2^{60}$

**Output Format**

For each test case, print a single line containing whichever message described in the *Problem Statement* above is appropriate. After all messages have been printed, the locked stub code in your editor prints the server load.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-13T15:52:26.760Z  

```cpp
#include <iostream>
#include <string>
#include <exception>

using namespace std;

// ==========================================
// PASTE THIS CLASS INTO YOUR OPEN EDIT ZONE
// ==========================================
class BadLengthException : public exception {
private:
    string length_str; // Keeps the string alive in memory

public:
    BadLengthException(int n) {
        length_str = to_string(n); // Convert int to string (e.g. 2 -> "2")
    }

    // Overriding the default exception text pointer returned to the system
    const char* what() const noexcept override {
        return length_str.c_str(); 
    }
};

// ========================================================
// THE LOCKED SYSTEM CODE (Ensure this matches your editor)
// ========================================================
bool checkUsername(string username) {
    bool isValid = true;
    int n = username.length();
    if(n < 5) {
        throw BadLengthException(n);
    }
    for(int i = 0; i < n - 1; i++) {
        if(username[i] == 'w' && username[i+1] == 'w') {
            isValid = false;
        }
    }
    return isValid;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        string username;
        cin >> username;
        try {
            bool isValid = checkUsername(username);
            if(isValid) {
                cout << "Valid" << endl;
            } else {
                cout << "Invalid" << endl;
            }
        } catch (BadLengthException e) {
            cout << "Too short: " << e.what() << endl;
        }
    }
    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/exceptional-server/problem)