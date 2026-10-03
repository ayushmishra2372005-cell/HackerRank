# Cats and a Mouse

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

We define a [magic square](https://en.wikipedia.org/wiki/Magic_square) to be an $n \times n$ matrix of distinct positive integers from $1$ to $n^2$ where the sum of any row, column, or diagonal of length $n$ is always equal to the same number:  the *magic constant*. 

You will be given a $3 \times 3$ matrix $s$ of integers in the inclusive range $[1, 9]$. We can convert any digit $a$ to any other digit $b$ in the range $[1, 9]$ at cost of $|a - b|$.  Given $s$, convert it into a magic square at *minimal* cost. Print this cost on a new line.

**Note:** The resulting magic square must contain distinct integers in the inclusive range $[1, 9]$.


**Example**  

$s = [[5, 3, 4], [1, 5, 8], [6, 4, 2]]  

The matrix looks like this: 
```
5 3 4
1 5 8
6 4 2
```
We can convert it to the following magic square:
```
8 3 4
1 5 9
6 7 2
```
This took three replacements at a cost of $|5-8|+|8-9|+|4-7|=7$.

**Function Description**

Complete the *formingMagicSquare* function in the editor below.  

formingMagicSquare has the following parameter(s):  

- *int s[3][3]:* a $3 \times 3$ array of integers  

**Returns**  

- *int:*  the minimal total cost of converting the input square to a magic square 

**Input Format**

Each of the $3$ lines contains three space-separated integers of row $s[i]$.  

**Constraints**

- $s[i][j] \in [1, 9]$

**Output Format**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-03T06:39:11.850Z  

```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int a[x][3];
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<x;i++)
    {
        int dis=abs(a[i][0]-a[i][2]);
        int dis1=abs(a[i][1]-a[i][2]);
        if(dis<dis1)
        {
            cout<<"Cat A"<<endl;
        }
        else if(dis1<dis)
        {
            cout<<"Cat B"<<endl;
        }
        else 
        {
            cout<<"Mouse C"<<endl;
        }
    }
    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/magic-square-forming/problem)