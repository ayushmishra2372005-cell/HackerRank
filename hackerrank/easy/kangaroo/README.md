# Apple and Orange

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are choreographing a circus show with various animals. For one act, you are given two kangaroos on a number line ready to jump in the positive direction (i.e, toward positive infinity). 

- The first kangaroo starts at location $x1$ and moves at a rate of $v1$ meters per jump. 
- The second kangaroo starts at location $x2$ and moves at a rate of $v2$ meters per jump.

You have to figure out a way to get both kangaroos at the same location at the same time  as part of the show.  If it is possible, return `YES`, otherwise return `NO`.  

**Example**  
$x1 = 2$   
$v1 = 1$   
$x2 = 1$   
$v2 = 2$   

After one jump, they are both at $x = 3$, ($x1 + v1 = 2 + 1$, $x2 + v2 = 1 + 2$), so the answer is `YES`.

**Function Description**

Complete the function *kangaroo* in the editor below.    

kangaroo has the following parameter(s):  

- *int x1, int v1*: starting position and jump distance for kangaroo 1
- *int x2, int v2*: starting position and jump distance for kangaroo 2   

**Returns**   

- *string:* either `YES` or `NO`


**Input Format**

A single line of four space-separated integers denoting the respective values of $x1$, $v1$, $x2$, and $v2$.

**Constraints**

- $0 \le x1 < x2 \le 10000$  
- $1 \le v1 \le 10000$  
- $1 \le v2 \le 10000$  

**Output Format**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-01T16:04:28.995Z  

```cpp
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int s,t;
    cin>>s>>t;
    int a,b;
    cin>>a>>b;
    int m,n;
    cin>>m>>n;
    int ap[m];
    int og[n];
    int apple=0;
    int orange=0;
    for(int i=0;i<m;i++)
    {
        cin>>ap[i];
        int land=a+ap[i];
        if(s<=land&&land<=t)
        {
            apple++;
        }
    }
    for(int i=0;i<n;i++)
    {
        cin>>og[i];
        int land=b+og[i];
        if(s<=land&&land<=t)
        {
            orange++;
        }
    }
    cout<<apple<<endl;
    cout<<orange;
    return 0;
}


```

---

[View on HackerRank](https://www.hackerrank.com/challenges/kangaroo/problem)