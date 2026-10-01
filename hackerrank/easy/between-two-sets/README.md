# Number Line Jumps

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

There will be two arrays of integers.  Determine all integers that satisfy the following two conditions:  

1. The elements of the first array are all factors of the integer being considered
2. The integer being considered is a factor of all elements of the second array

These numbers are referred to as being *between* the two arrays.  Determine how many such numbers exist.

**Example**  
$a = [2, 6]$  
$b = [24, 36]$  

There are two numbers between the arrays: $6$ and $12$.  
$6\%2 = 0$, $6\%6 = 0$, $24\%6 = 0$ and $36\%6 = 0$ for the first value.   
$12\%2 = 0$, $12\%6 = 0$ and $24\%12 = 0$, $36\%12 = 0$ for the second value.
Return $2$.

**Function Description**  

Complete the *getTotalX* function in the editor below.  It should return the number of integers that are betwen the sets.  

getTotalX has the following parameter(s):  

- *int a[n]*: an array of integers  
- *int b[m]*: an array of integers  

**Returns**  

- *int:* the number of integers that are between the sets


**Input Format**

The first line contains two space-separated integers, $n$ and $m$, the number of elements in arrays $a$ and $b$. 		
The second line contains $n$ distinct space-separated integers $a[i]$ where $0 \le i \lt n$. 		
The third line contains $m$ distinct space-separated integers $b[j]$ where $0 \le j \lt m$.


**Constraints**

- $1 \le n, m \le 10$
- $1 \le a[i] \le 100$
- $1 \le b[j] \le 100$

**Output Format**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-01T17:08:30.279Z  

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int x1, v1, x2, v2;
    cin >> x1 >> v1 >> x2 >> v2;
    if (v1 > v2 && (x2 - x1) % (v1 - v2) == 0) 
    {
        cout << "YES" << endl;
    } 
    else 
    {
        cout << "NO" << endl;
    }
    
    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/between-two-sets/problem)