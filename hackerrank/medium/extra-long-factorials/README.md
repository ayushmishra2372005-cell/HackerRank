# Extra Long Factorials

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

The *factorial* of the integer $n$, written $n!$, is defined as:   

$$n! = n \times (n-1) \times (n-2) \times \cdots \times 3 \times 2 \times 1$$

Calculate and print the factorial of a given integer.  

For example, if $n = 30$, we calculate $30 \times 29 \times 28 \times \cdots \times 2 \times 1$ and get $265252859812191058636308480000000$.

**Function Description**

Complete the *extraLongFactorials* function in the editor below.  It should print the result and return.  

extraLongFactorials has the following parameter(s):  

- *n*: an integer

**Note:** Factorials of $n > 20$ can't be stored even in a $64-bit$ long long variable. Big integers must be used for such calculations. Languages like Java, Python, Ruby etc. can handle big integers, but we need to write additional code in C/C++ to handle huge values.  

We recommend solving this challenge using BigIntegers.  

**Input Format**

 Input consists of a single integer $n$

**Constraints**

$1 \le n \le 100$

**Output Format**

Print the factorial of $n$.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-06T14:02:11.915Z  

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

[View on HackerRank](https://www.hackerrank.com/challenges/extra-long-factorials/problem)