# Sherlock and Squares

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Watson likes to challenge Sherlock's math ability.  He will provide a starting and ending value that describe a range of integers, inclusive of the endpoints.  Sherlock must determine the number of *square integers* within that range.

**Note**: A square integer is an integer which is the square of an integer, e.g. $1, 4, 9, 16, 25$. 

**Example**  
$a = 24$  
$b = 49$  

There are three square integers in the range: $25, 36$ and $49$.  Return $3$.   

**Function Description**

Complete the *squares* function in the editor below.  It should return an integer representing the number of square integers in the inclusive range from $a$ to $b$.  

squares has the following parameter(s):  

- *int a:* the lower range boundary
- *int b:* the upper range boundary  

**Returns**  

- *int:* the number of square integers in the range

**Input Format**

The first line contains $q$, the number of test cases.   
Each of the next $q$ lines contains two space-separated integers, $a$ and $b$, the starting and ending integers in the ranges.     


**Constraints**

$1 \le q \le 100$  
$1 \le a \le b \le 10^9$  


**Output Format**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-07T15:02:36.582Z  

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        int a, b;
        cin >> a >> b;
        int count = 0;
        
        // Fixed: Start 'j' at the square root of 'a' and stop at the square root of 'b'
        // This avoids calculating unnecessary squares and runs instantly!
        int start = sqrt(a);
        int end = sqrt(b);
        
        for(int j = start; j <= end; j++)
        {
            int n = j * j;
            if(n >= a && n <= b)
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/sherlock-and-squares/problem)