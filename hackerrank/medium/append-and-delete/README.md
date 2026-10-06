# Extra Long Factorials

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You have two strings of lowercase English letters. You can perform two types of operations on the first string:

1. *Append* a lowercase English letter to the end of the string.
2. *Delete* the last character of the string. Performing this operation on an empty string results in an empty string.

Given an integer, $k$, and two strings, $s$ and $t$, determine whether or not you can convert $s$ to $t$ by performing *exactly* $k$ of the above operations on $s$. If it's possible, print `Yes`.  Otherwise, print `No`.

**Example**. 
$s=[a,b,c]$  
$t=[d,e,f]$  
$k=6$  

To convert $s$ to $t$, we first delete all of the characters in $3$ moves.  Next we add each of the characters of $t$ in order.  On the $6^{th}$ move, you will have the matching string.  Return `Yes`.  

If there were more moves available, they could have been eliminated by performing multiple deletions on an empty string.  If there were fewer than $6$ moves, we would not have succeeded in creating the new string.  

**Function Description**  

Complete the *appendAndDelete* function in the editor below.  It should return a string, either `Yes` or `No`.  

appendAndDelete has the following parameter(s):  

- *string s*: the initial string  
- *string t*: the desired string  
- *int k*: the exact number of operations that must be performed  

**Returns**  

- *string:* either `Yes` or `No`

**Input Format**

The first line contains a string $s$, the initial string. 		
The second line contains a string $t$, the desired final string.  
The third line contains an integer $k$, the number of operations.


**Constraints**

- $1 \le |s| \le 100$
- $1 \le |t| \le 100$
- $1 \le k \le 100$
- $s$ and $t$ consist of lowercase English letters, $\text{ascii[a-z]}$.


**Output Format**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-06T14:02:16.396Z  

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> result;
    result.push_back(1); // Start with 1
    
    for (int i = 2; i <= n; i++) {
        int carry = 0;
        // Multiply each digit in the array by the current number 'i'
        for (int j = 0; j < result.size(); j++) {
            int prod = result[j] * i + carry;
            result[j] = prod % 10; // Store the last digit
            carry = prod / 10;     // Carry the rest forward
        }
        // If there's a carry left over, expand the array
        while (carry > 0) {
            result.push_back(carry % 10);
            carry /= 10;
        }
    }
    
    // Print the digits in reverse order
    for (int i = result.size() - 1; i >= 0; i--) {
        cout << result[i];
    }
    cout << endl;
    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/append-and-delete/problem)