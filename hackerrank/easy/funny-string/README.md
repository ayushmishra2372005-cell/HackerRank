# Funny String

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

In this challenge, you will determine whether a string is *funny* or not.  To determine whether a string is funny, create a copy of the string in reverse e.g. $abc \rightarrow cba$.  Iterating through each string, compare the absolute difference in the [ascii](https://en.wikipedia.org/wiki/ASCII) values of the characters at positions 0 and 1, 1 and 2 and so on to the end.  If the list of absolute differences is the same for both strings, they are funny.

Determine whether a give string is funny.  If it is, return `Funny`, otherwise return `Not Funny`.

**Example**  
$s = \texttt{'lmnop'}$  

The ordinal values of the charcters are $[108, 109, 110, 111, 112]$.  $s_{reverse} = \texttt{'ponml'}$ and the ordinals are $[112, 111, 110, 109, 108]$.  The absolute differences of the adjacent elements for both strings are $[1, 1, 1, 1]$, so the answer is `Funny`.

**Function Description**

Complete the *funnyString* function in the editor below.   

funnyString has the following parameter(s):  

- *string s:* a string to test  

**Returns**  

- *string:* either `Funny` or `Not Funny`

**Input Format**

The first line contains an integer $q$, the number of queries. 	
The next $q$ lines each contain a string, $s$.   

**Constraints**

- $1 \leq q \leq 10$  	
- $2 \leq \text{length of }s  \leq 10000$	

**Output Format**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-05T17:46:44.045Z  

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int w;
    cin >> w;
    for (int k = 0; k < w; k++)
    {
        string s;
        cin >> s;

        int n = s.length();
        bool isFunny = true;

        // Compare adjacent differences from the front and back simultaneously
        for (int i = 1; i < n; i++)
        {
            int diff_forward = abs(s[i] - s[i - 1]);
            int diff_reverse = abs(s[n - 1 - i] - s[n - i]);

            if (diff_forward != diff_reverse)
            {
                isFunny = false;
                break;
            }
        }

        if (isFunny)
        {
            cout << "Funny" << endl;
        }
        else
        {
            cout << "Not Funny" << endl;
        }
    }
    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/funny-string/problem)