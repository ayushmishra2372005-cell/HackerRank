# Electronics Shop

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

A person wants to determine the most expensive computer keyboard and USB drive that can be purchased with a give budget. Given price lists for keyboards and USB drives and a budget, find the cost to buy them.  If it is not possible to buy *both* items, return $-1$.

**Example**  
$b = 60$  
$keyboards=[40, 50, 60]$  
$drives = [5, 8, 12]$  

The person can buy a $40 \text{ keyboard } + 12 \text { USB drive } = 52$, or a $50 \text{ keyboard } + 8\text{ USB drive } = 58$.  Choose the latter as the more expensive option and return $58$.  

**Function Description**  

Complete the *getMoneySpent* function in the editor below.  

getMoneySpent has the following parameter(s):  

- *int keyboards[n]*: the keyboard prices  
- *int drives[m]*:  the drive prices  
- *int b*: the budget  

**Returns**  

- *int:* the maximum that can be spent, or $-1$ if it is not possible to buy both items

**Input Format**

The first line contains three space-separated integers $b$, $n$, and $m$, the budget, the number of keyboard models and the number of USB drive models.		
The second line contains $n$ space-separated integers $keyboard[i]$, the prices of each keyboard model.		
The third line contains $m$ space-separated integers $drives$, the prices of the USB drives.

**Constraints**

* $ 1 \le n, m \le 1000 $
* $ 1 \le b \le 10^6 $
* The price of each item is in the inclusive range $[1, 10^6]$.

**Output Format**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-02T15:19:54.565Z  

```cpp
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,m,b;
    cin>>b>>n>>m;
    int a[n];
    int c[m];
    int d=0;
    int max=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>c[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i]+c[j]<=b)
            {
                d=(a[i])+(c[j]);
                if(max<d)
                {
                    max=d;
                }
            }
        }
    }
    if(max>0)
    {
        cout<<max;
    }
    else 
    {
        cout<<"-1";
    }
    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/electronics-shop/problem)