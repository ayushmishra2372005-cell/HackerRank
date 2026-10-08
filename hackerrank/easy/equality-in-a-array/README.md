# Equalize the Array

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an array of integers, determine the minimum number of elements to delete to leave only elements of equal value.
  
**Example**  

$arr = [1, 2, 2, 3]$  

Delete the $2$ elements $1$ and $3$ leaving $arr = [2, 2]$. If both twos plus either the $1$ or the $3$ are deleted, it takes $3$ deletions to leave either $[3]$ or $[1]$.  The minimum number of deletions is $2$.

**Function Description**  

Complete the *equalizeArray* function in the editor below.  

equalizeArray has the following parameter(s):  

- *int arr[n]:* an array of integers   

**Returns**  

- *int:* the minimum number of deletions required  

**Input Format**

The first line contains an integer $n$, the number of elements in $arr$.  		
The next line contains $n$ space-separated integers $arr[i]$.


**Constraints**

- $1 \leq n \leq 100$
- $1 \le arr[i] \le 100$

**Output Format**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-08T14:45:20.041Z  

```cpp

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    
    // Create a frequency table initialized to 0 for numbers up to 100
    vector<int> frequency(101, 0);
    
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        frequency[a[i]]++; // Increment the counter for this specific value
    }
    
    // Find the single absolute highest frequency in our tracking table
    int max_freq = 0;
    for(int i = 1; i <= 100; i++)
    {
        if(frequency[i] > max_freq)
        {
            max_freq = frequency[i];
        }
    }
    
    // The minimum deletions needed is total items minus the max frequency
    int deletions = n - max_freq;
    
    cout << deletions << endl;
    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/equality-in-a-array/problem)