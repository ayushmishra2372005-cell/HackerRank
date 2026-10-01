# Divisible Sum Pairs

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an array of integers and a positive integer $k$, determine the number of $(i, j)$ pairs where $i \lt j$ and $ar[i]$ + $ar[j]$ is divisible by $k$.  

**Example**  

$ar = [1, 2, 3, 4, 5, 6]$   
$k = 5$   

Three pairs meet the criteria:  $[1, 4], [2, 3],$ and $[4, 6]$.  

**Function Description**

Complete the *divisibleSumPairs* function in the editor below.   

divisibleSumPairs has the following parameter(s):  

- *int n:* the length of array $ar$  
- *int ar[n]:* an array of integers  
- *int k:* the integer divisor   

**Returns**  
-	*int:* the number of pairs  

**Input Format**

The first line contains $2$ space-separated integers, $n$ and $k$.	
The second line contains $n$ space-separated integers, each a value of $arr[i]$.  



**Constraints**

* $2 \leq n \leq 100$
* $1 \leq k \leq 100$
* $1 \leq ar[i] \leq 100$

**Output Format**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-01T18:00:58.341Z  

```cpp
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((a[i]+a[j])%k==0)
            {
                count++;
            }
        }
    }
    cout<<count;
    return 0;
} 

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/divisible-sum-pairs/problem)