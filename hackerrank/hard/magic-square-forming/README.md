# Forming a Magic Square

![Difficulty](https://img.shields.io/badge/Difficulty-Hard-red)

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
**Submitted:** 2026-10-04T13:26:56.581Z  

```cpp
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int a[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
        cin>>a[i][j];
        }
    }
    int magic[8][9] =
       {{8, 1, 6, 3, 5, 7, 4, 9, 2},
        {6, 1, 8, 7, 5, 3, 2, 9, 4},
        {4, 9, 2, 3, 5, 7, 8, 1, 6},
        {2, 9, 4, 7, 5, 3, 6, 1, 8},
        {8, 3, 4, 1, 5, 9, 6, 7, 2},
        {4, 3, 8, 9, 5, 1, 2, 7, 6},
        {6, 7, 2, 1, 5, 9, 8, 3, 4},
        {2, 7, 6, 9, 5, 1, 4, 3, 8}};
    int min=999;
    for(int i=0;i<8;i++)
    {
        int current=0;
            for(int j = 0; j < 9; j++)
            {
                int row = j / 3;
            int col = j % 3;
            current += abs(a[row][col] - magic[i][j]);
            }
        if(current<min)
        {
            min=current;
        }
    }
    cout<<min<<endl;
    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/magic-square-forming/problem)