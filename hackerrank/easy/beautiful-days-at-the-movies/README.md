# Beautiful Days at the Movies

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Lily likes to play games with integers.  She has created a new game where she determines the difference between a number and its reverse.  For instance, given the number $12$, its reverse is $21$.  Their difference is $9$.  The number $120$ reversed is $21$, and their difference is $99$.

She decides to apply her game to decision making.  She will look at a numbered range of days and will only go to a movie on a *beautiful day*.

Given a range of numbered days, $[i \ldots j]$ and a number $k$, determine the number of days in the range that are *beautiful*.  Beautiful numbers are defined as numbers where $|i \text{-} reverse(i)|$ is evenly divisible by $k$.  If a day's value is a beautiful number, it is a beautiful day.  Return the number of beautiful days in the range.

**Function Description**  

Complete the *beautifulDays* function in the editor below.   

beautifulDays has the following parameter(s):  

- *int i:* the starting day number  
- *int j:* the ending day number  
- *int k:* the divisor  

**Returns**  

- *int:* the number of beautiful days in the range  

**Input Format**

A single line of three space-separated integers describing the respective values of $i$, $j$, and $k$.

**Constraints**

- $1 \le i \le j \le 2 \times 10^6$
- $1 \le k \le 2 \times 10^9$

**Output Format**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-05T14:23:18.153Z  

```cpp
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int count = 0;
    
    for (int i = a; i <= b; i++)
    {
        // Use a temporary variable so we don't accidentally modify 'i'
        int temp = i; 
        int reverse = 0;
        
        // This loop extracts ALL digits of the current number 'temp'
        while (temp > 0) 
        {
            reverse = (reverse * 10) + (temp % 10);
            temp /= 10;
        }
        
        // Fixed: Check the difference between the current day 'i' and its 'reverse'
        int d = abs(i - reverse);
        if (d % c == 0)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/beautiful-days-at-the-movies/problem)