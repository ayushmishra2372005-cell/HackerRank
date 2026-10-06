# Find Digits

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

An integer $d$ is a *divisor* of an integer $n$ if the remainder of $n \div d = 0$.  

Given an integer, for each digit that makes up the integer determine whether it is a divisor.  Count the number of divisors occurring within the integer.  

**Example**  
$n = 124$  

Check whether $1$, $2$ and $4$ are divisors of $124$.  All 3 numbers divide evenly into $124$ so return $3$.  

$n = 111$  

Check whether $1$, $1$, and $1$ are divisors of $111$.  All 3 numbers divide evenly into $111$ so return $3$.  

$n = 10$  

Check whether $1$ and $0$ are divisors of $10$.  $1$ is, but $0$ is not.  Return $1$.  

**Function Description**

Complete the *findDigits* function in the editor below.   

findDigits has the following parameter(s):

- *int n*: the value to analyze  

**Returns**  

- *int:* the number of digits in $n$ that are divisors of $n$  

**Input Format**

The first line is an integer, $t$, the number of test cases.		
The $t$ subsequent lines each contain an integer, $n$.  



**Constraints**

$1 \le t \le 15$  
$0 < n < 10^{9}$

**Output Format**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-06T13:50:31.769Z  

```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int o;
        cin>>o;
        int count=0;
        for(int j=o;j>0;j/=10)
        {
            int d=j%10;
            if(d==0||o%d!=0)
            {
                continue;
            }
            else 
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/find-digits/problem)