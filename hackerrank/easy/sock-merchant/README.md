# Sales by Match

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

There is a large pile of socks that must be paired by color. Given an array of integers representing the color of each sock, determine how many pairs of socks with matching colors there are.

**Example**   
$n = 7$   
$ar = [1, 2, 1, 2, 1, 3, 2]$   

There is one pair of color $1$ and one of color $2$.  There are three odd socks left, one of each color.  The number of pairs is $2$.  

**Function Description**  

Complete the *sockMerchant* function in the editor below.     

sockMerchant has the following parameter(s):  

- *int n:* the number of socks in the pile   
- *int ar[n]:* the colors of each sock   

**Returns**   

- *int:* the number of pairs   

**Input Format**

The first line contains an integer $n$, the number of socks represented in $ar$. 		
The second line contains $n$ space-separated integers, $ar[i]$, the colors of the socks in the pile.

**Constraints**

* $1 \le n \le 100$
* $1 \le ar[i] \le 100$ where $0 \le i < n$


**Output Format**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-02T14:25:53.608Z  

```cpp
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==-1)
        {
            continue;
        }
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                a[i]=-1;
                a[j]=-1;
                break;
            }
        }
    } 
    cout<<count;  
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/sock-merchant/problem)