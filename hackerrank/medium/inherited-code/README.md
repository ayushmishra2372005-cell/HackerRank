# Inherited Code

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You inherited a piece of code that performs username validation for your company's website. The existing function works reasonably well, but it throws an exception when the username is too short. Upon review, you realize that nobody ever defined the exception. 

The inherited code is provided for you in the locked section of your editor. Complete the code so that, when an exception is thrown, it prints `Too short: n` (where $n$ is the length of the given username). 

**Input Format**

The first line contains an integer, $t$, the number of test cases.  
Each of the $t$ subsequent lines describes a test case as a single username string, $u$.

**Constraints**

- $1 \le t \le 1000$  
- $1 \le |u| \le 100$  
- The username consists only of uppercase and lowercase letters.

**Output Format**

You are not responsible for directly printing anything to stdout. If your code is correct, the locked stub code in your editor will print either `Valid` (if the username is valid), `Invalid` (if the username is invalid), or `Too short: n` (where $n$ is the length of the too-short username) on a new line for each test case.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-13T15:52:20.360Z  

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

[View on HackerRank](https://www.hackerrank.com/challenges/inherited-code/problem)