# Apple and Orange

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Sam's house has an apple tree and an orange tree that yield an abundance of fruit. Using the information given below, determine the number of apples and oranges that land on Sam's house.  

In the diagram below: 

- The red region denotes the house, where $s$ is the start point, and $t$ is the endpoint. The apple tree is to the left of the house, and the orange tree is to its right. 
- Assume the trees are located on a single point, where the apple tree is at point $a$, and the orange tree is at point $b$.
- When a fruit falls from its tree, it lands $d$ units of distance from its tree of origin along the $x$-axis. *A negative value of $d$ means the fruit fell $d$ units to the tree's left, and a positive value of $d$ means it falls $d$ units to the tree's right. *

![Apple and orange(2).png](https://s3.amazonaws.com/hr-challenge-images/25220/1474218925-f2a791d52c-Appleandorange2.png)

Given the value of $d$ for $m$ apples and $n$ oranges, determine how many apples and oranges will fall on Sam's house (i.e., in the inclusive range $[s, t]$)?

For example, Sam's house is between $s = 7$ and $t = 10$.  The apple tree is located at $a = 4$ and the orange at $b = 12$.  There are $m = 3$ apples and $n = 3$ oranges.  Apples are thrown $apples = [2, 3, -4]$ units distance from $a$, and $oranges = [3, -2, -4]$ units distance.  Adding each apple distance to the position of the tree, they land at $[4 + 2, 4 + 3, 4 + -4] = [6, 7, 0]$.  Oranges land at $[12 + 3, 12 + -2, 12 + -4] = [15, 10, 8]$.  One apple and two oranges land in the inclusive range $7-10$ so we print 

    1
    2

**Function Description**  

Complete the *countApplesAndOranges* function in the editor below.  It should print the number of apples and oranges that land on Sam's house, each on a separate line.  

countApplesAndOranges has the following parameter(s):  

- *s*: integer, starting point of Sam's house location.       
- *t*: integer, ending location of Sam's house location.     
- *a*: integer, location of the Apple tree.      
- *b*: integer, location of the Orange tree.         
- *apples*: integer array, distances at which each apple falls from the tree.      
- *oranges*: integer array, distances at which each orange falls from the tree.  

**Input Format**

The first line contains two space-separated integers denoting the respective values of $s$ and $t$.		
The second line contains two space-separated integers denoting the respective values of $a$ and $b$.		
The third line contains two space-separated integers denoting the respective values of $m$ and $n$.			
The fourth line contains $m$ space-separated integers denoting the respective distances that each apple falls from point $a$.		
The fifth line contains $n$ space-separated integers denoting the respective distances that each orange falls from point $b$.

**Constraints**

* $1 \le s, t, a, b, m, n \le 10^{5} $
* $-10^{5} \le d \le 10^{5} $
* $ a < s < t < b $

**Output Format**

Print two integers on two different lines:

1. The first integer:  the number of apples that fall on Sam's house.
2. The second integer:  the number of oranges that fall on Sam's house.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-01T16:03:49.401Z  

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

[View on HackerRank](https://www.hackerrank.com/challenges/apple-and-orange/problem)