# Non-Divisible Subset

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a set of distinct integers, print the size of a maximal subset of $S$ where the sum of any $2$ numbers in $S'$ is *not* evenly divisible by $k$.

**Example**   
$S = [19, 10, 12, 10, 24, 25, 22]$
$k = 4$

One of the arrays that can be created is $S'[0] = [10, 12, 25]$.  Another is $S'[1] = [19, 22, 24]$.  After testing all permutations, the maximum length solution array has $3$ elements.  

**Function Description**  

Complete the *nonDivisibleSubset* function in the editor below.  

nonDivisibleSubset has the following parameter(s):  

- *int S[n]*: an array of integers  
- *int k*: the divisor  

**Returns**   

- *int:* the length of the longest subset of $S$ meeting the criteria  

**Input Format**

The first line contains $2$ space-separated integers, $n$ and $k$, the number of values in $S$ and the *non* factor.	
The second line contains $n$ space-separated integers, each an $S[i]$, the unique values of the set.

**Constraints**

* $1 \leq n \leq 10^5$
* $1 \leq k \leq 100$
* $1 \leq S[i] \leq 10^9$
* All of the given numbers are distinct.

**Output Format**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-07T15:54:09.386Z  

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    
    vector<int> a(n);
    // Keeping your exact frequency logic tracking using a small helper array of size k
    vector<int> remainder_count(k, 0); 
    
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        // Calculate the remainder directly
        remainder_count[a[i] % k]++;
    }
    
    int max_subset_size = 0;
    
    // 1. Condition for remainder 0: We can only pick AT MOST 1 element
    if(remainder_count[0] > 0)
    {
        max_subset_size++;
    }
    
    // 2. Loop through the remainder combinations (similar to your pairing approach)
    for(int i = 1; i <= k / 2; i++)
    {
        // Special case: If the remainder is exactly half of k
        if(i == k - i)
        {
            if(remainder_count[i] > 0)
            {
                max_subset_size++;
            }
        }
        else 
        {
            // Your logic of choosing the valid subset count over clashing pairs:
            // We greedily pick the larger group between remainder 'i' and 'k - i'
            if(remainder_count[i] > remainder_count[k - i])
            {
                max_subset_size += remainder_count[i];
            }
            else 
            {
                max_subset_size += remainder_count[k - i];
            }
        }
    }
    
    cout << max_subset_size << endl;
    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/non-divisible-subset/problem)