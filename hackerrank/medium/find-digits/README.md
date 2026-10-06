# Jumping on the Clouds: Revisited

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

An integer $d$ is a *divisor* of an integer $n$ if the remainder of $n \div d = 0$.  

Given an integer, for each digit that makes up the integer determine whether it is a divisor.  Count the number of divisors occurring within the integer.  

**Example**  
$n = 124$  

Check whether $1$, $2$ and $4$ are divisors of $124$.  All 3 numbers divide evenly into $124$ so return $3$.  

$n = 111$  

Check whether $1$, $1$, and $1$ are divisors of $111$.  All 3 numbers divide evenly into $111$ so return $3$.  

$n = 10$  

Check whether $1$ and $0$ are divisors of $10$.  $1$ is, but $0$ is not.  Return $1$.  

**Function Description**

Complete the *findDigits* function in the editor below.   

findDigits has the following parameter(s):

- *int n*: the value to analyze  

**Returns**  

- *int:* the number of digits in $n$ that are divisors of $n$  

**Input Format**

The first line is an integer, $t$, the number of test cases.		
The $t$ subsequent lines each contain an integer, $n$.  



**Constraints**

$1 \le t \le 15$  
$0 < n < 10^{9}$

**Output Format**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-06T13:33:23.082Z  

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    
    vector<int> a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    int e = 100;
    int curr = 0; // Tracks our current cloud position, starting at 0
    
    do {
        // 1. Jump forward by k steps circularly
        curr = (curr + k) % n;
        
        // 2. Pay 1 energy unit for the jump
        e = e - 1;
        
        // 3. Pay 2 extra energy units if it's a thunderhead cloud
        if (a[curr] == 1)
        {
            e = e - 2;
        }
        
    } while (curr != 0); // Keep jumping until we return to the start (cloud 0)
    
    cout << e << endl;
    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/find-digits/problem)