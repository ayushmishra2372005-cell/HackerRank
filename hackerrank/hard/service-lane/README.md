# Service Lane

![Difficulty](https://img.shields.io/badge/Difficulty-Hard-red)

## Problem

A driver is driving on the freeway. The check engine light of his vehicle is on, and the driver wants to get service immediately. Luckily, a service lane runs parallel to the highway. It varies in width along its length.

![Paradise Highway](https://hr-testcases.s3.amazonaws.com/1331)

You will be given an array of widths at points along the road (*indices*), then a list of the indices of entry and exit points. Considering each entry and exit point pair, calculate the maximum size vehicle that can travel that segment of the service lane safely.

**Example**    
$n = 4$   
$width = [2,3,2,1]$   
$cases = [[1, 2], [2, 4]]$  

If the entry index, $i = 1$ and the exit, $j = 2$, there are two segment widths of $2$ and $3$ respectively.  The widest vehicle that can fit through both is $2$.  If $i = 2$ and $j = 4$, the widths are $[3,2,1]$ which limits vehicle width to $1$.  

**Function Description**  

Complete the *serviceLane* function in the editor below.  

serviceLane has the following parameter(s):  

- *int n:* the size of the $width$ array  
- *int cases[t][2]:* each element contains the starting and ending indices for a segment to consider, inclusive    

**Returns**  

- *int[t]:* the maximum width vehicle that can pass through each segment of the service lane described

**Input Format**

The first line of input contains two integers, $n$ and $t$, where $n$ denotes the number of width measurements and $t$, the number of test cases. The next line has $n$ space-separated integers which represent the array $width$.

The next $t$ lines contain two integers, $i$ and $j$, where $i$ is the start index and $j$ is the end index of the segment to check.

**Constraints**

+ $2 \le n \le 100000$  
+ $1 \le t \le 1000$  
+ $0 \le i \lt j < n$  
+ $2 \le j-i+1 \le min (n, 1000)$  
+ $1 \le width[k] \le 3, \text{where } 0 \le k \lt n$

**Output Format**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-24T13:39:40.107Z  

```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<t;i++)
    {
        int c,b;
        cin>>c>>b;
        int min=999;
        for(int j=c;j<=b;j++)
        {
            if(min>a[j])
            {
                min=a[j];
            }
        }
        cout<<min<<endl;
    }
    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/service-lane/problem)