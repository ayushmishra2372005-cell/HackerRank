# Circular Array Rotation

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

John Watson knows of an operation called a _right circular rotation_ on an array of integers.  One rotation operation moves the last array element to the first position and shifts all remaining elements right one.  To test Sherlock's abilities, Watson provides Sherlock with an array of integers.  Sherlock is to perform the rotation operation a number of times then determine the value of the element at a given position.

For each array, perform a number of right circular rotations and return the values of the elements at the given indices.

**Example**  
$a=[3,4,5]$  
$k=2$  
$queries = [1,2]$  

Here $k$ is the number of rotations on $a$, and $queries$ holds the list of indices to report.  First we perform the two rotations: $[3,4,5] \rightarrow [5,3,4] \rightarrow [4,5,3]$  

Now return the values from the zero-based indices $1$ and $2$ as indicated in the $queries$ array.  
$a[1] = 5$  
$a[2] = 3$  

**Function Description**  

Complete the *circularArrayRotation* function in the editor below.  

circularArrayRotation has the following parameter(s):  

- *int a[n]*: the array to rotate  
- *int k*: the rotation count  
- *int queries[1]*: the indices to report  

**Returns**  

- *int[q]:* the values in the rotated $a$ as requested in $m$

**Input Format**

The first line contains $3$ space-separated integers, $n$, $k$, and $q$, the number of elements in the integer array, the rotation count and the number of queries.  
The second line contains $n$ space-separated integers, where each integer $i$ describes array element $a[i]$ (where $0 \le i \lt n$).	
Each of the $q$ subsequent lines contains a single integer, $queries[i]$, an index of an element in $a$ to return.

**Constraints**

- $1 \le n \le 10^5$
- $1 \le a[i] \le 10^5$
- $1 \le k \le 10^5$
- $1 \le q \le 500$    
- $0 \le queries[i] \lt n$

**Output Format**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-07T14:47:01.365Z  

```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    vector<int >d(a);
    for(int i=0;i<a;i++)
    {
        cin>>d[i];
    }
    vector<int>e(c);
    for(int i=0;i<c;i++)
    {
        cin>>e[i];
    }
    b=b%a;
    for(int i=0;i<a/2;i++)
    {
        int temp=d[i];
        d[i]=d[a-1-i];
        d[a-1-i]=temp;
    }
    for(int i=0;i<b/2;i++)
    {
        int temp=d[i];
        d[i]=d[b-1-i];
        d[b-1-i]=temp;
    }
    int remaining = a - b;
    for(int i = 0; i < remaining / 2; i++)
    {
        int temp = d[b + i];
        d[b + i] = d[a - 1 - i];
        d[a - 1 - i] = temp;
    }
    for(int i=0;i<c;i++)
    {
        cout<<d[e[i]]<<endl;
    }
    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/circular-array-rotation/problem)