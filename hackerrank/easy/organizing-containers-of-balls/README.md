# Taum and B'day

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

David has several containers, each with a number of balls in it.  He has just enough containers to sort each type of ball he has into its own container.  David wants to sort the balls using his sort method.

David wants to perform some number of swap operations such that:

* Each container contains only balls of the same type.
* No two balls of the same type are located in different containers.


**Example**   

$containers = [[1, 4], [2, 3]]$   

David has $n=2$ containers and $2$ different types of balls, both of which are numbered from $0$ to $n-1 = 1$. The distribution of ball types per container are shown in the following diagram.   

![image](https://s3.amazonaws.com/hr-challenge-images/0/1485811368-9e78c98652-swapping-balls.png)

In a single operation, David can *swap* two balls located in different containers.

The diagram below depicts a single swap operation:

![image](https://s3.amazonaws.com/hr-challenge-images/0/1485811849-e97b84e218-swapping-balls-ps-1.png)

In this case, there is no way to have all green balls in one container and all red in the other using only swap operations.  Return `Impossible`.  

You must perform $q$ queries where each query is in the form of a matrix, $M$. For each query, print ``Possible`` on a new line if David can satisfy the conditions above for the given matrix.  Otherwise, print ``Impossible``.  

**Function Description**  

Complete the *organizingContainers* function in the editor below.   

organizingContainers has the following parameter(s):  

- *int containter[n][m]*: a two dimensional array of integers that represent the number of balls of each color in each container  

**Returns**   

- *string:*  either `Possible` or `Impossible`     

**Input Format**

The first line contains an integer $q$, the number of queries.  

Each of the next $q$ sets of lines is as follows:  

1. The first line contains an integer $n$, the number of containers (rows) and ball types (columns).		
2. Each of the next $n$ lines contains $n$ space-separated integers describing row $containers[i]$.

**Constraints**

* $1 \le q \le 10$  
* $1 \le n \le 100$  
* $0 \le containers[i][j] \le 10^9$

**Scoring**

* For $33\%$ of score, $1 \le n \le 10$.  
* For $100\%$ of score, $1 \le n \le 100$.

**Output Format**

For each query, print ``Possible`` on a new line if David can satisfy the conditions above for the given matrix.  Otherwise, print ``Impossible``.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-09T15:08:34.623Z  

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Fast I/O to handle heavy test files
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--)
    {
        long long b, w, bc, wc, z;
        cin >> b >> w >> bc >> wc >> z;
        
        // Find the absolute cheapest way to buy ONE black gift
        // It's either the normal price (bc) OR buying white and converting (wc + z)
        long long actual_bc = min(bc, wc + z);
        
        // Find the absolute cheapest way to buy ONE white gift
        // It's either the normal price (wc) OR buying black and converting (bc + z)
        long long actual_wc = min(wc, bc + z);
        
        // Total cost calculation
        long long total_cost = (b * actual_bc) + (w * actual_wc);
        
        cout << total_cost << "\n";
    }
    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/organizing-containers-of-balls/problem)