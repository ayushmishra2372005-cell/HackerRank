# Picking Numbers

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array of integers, find the longest subarray where the absolute difference between any two elements is less than or equal to $1$.  

**Example**  

$a=[1,1,2,2,4,4,5,5,5]$  

There are two subarrays meeting the criterion: $[1,1,2,2]$ and $[4,4,5,5,5]$.  The maximum length subarray has $5$ elements.

**Function Description**  

Complete the *pickingNumbers* function in the editor below.  

pickingNumbers has the following parameter(s):  

- *int a[n]:* an array of integers  

**Returns**  

- *int:*  the length of the longest subarray that meets the criterion  

**Input Format**

The first line contains a single integer $n$, the size of the array $a$.   	
The second line contains $n$ space-separated integers, each an $a[i]$.

**Constraints**

- $2 \le n \le 100$
- $0 < a[i] < 100$
- The answer will be $\ge 2$. 

**Output Format**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-03T16:00:42.273Z  

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    int max_len = 0;
    
    // Outer loop selects the baseline element
    for(int i = 0; i < n; i++)
    {
        int current_element_count = 0;
        int neighbor_element_count = 0;
        
        // Inner loop checks the entire array against the selected element
        for(int j = 0; j < n; j++)
        {
            // 1. Count how many times the exact element a[i] appears
            if(a[j] == a[i])
            {
                current_element_count++;
            }
            // 2. Count how many times the exact neighbor (a[i] + 1) appears
            else if(a[j] == a[i] + 1)
            {
                neighbor_element_count++;
            }
        }
        
        // Combined valid subarray length for this specific pair
        int total_valid_length = current_element_count + neighbor_element_count;
        
        // Update the global maximum length found so far
        if(total_valid_length > max_len)
        {
            max_len = total_valid_length;
        }
    }
    
    cout << max_len;
    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/picking-numbers/problem)