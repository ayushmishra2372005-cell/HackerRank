# Birthday Cake Candles

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a time in [$12$-hour AM/PM format](https://en.wikipedia.org/wiki/12-hour_clock), convert it to military (24-hour) time.  

Note: 
- 12:00:00AM on a 12-hour clock is 00:00:00 on a 24-hour clock.  
- 12:00:00PM on a 12-hour clock is 12:00:00 on a 24-hour clock.  

**Example**  

- $\text{s = '12:01:00PM'}$   

  Return '12:01:00'.

- $\text{s = '12:01:00AM'}$   

  Return '00:01:00'.

**Function Description**  

Complete the $timeConversion$ function with the following parameter(s):

- $string\ s$: a time in $12$ hour format  

**Returns**

- $string$: the time in $24$ hour format

**Input Format**

A single string $s$ that represents a time in $12$-hour clock format (i.e.: $\text{hh:mm:ssAM}$ or $\text{hh:mm:ssPM}$).

**Constraints**

- All input times are valid

**Output Format**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-29T15:54:55.884Z  

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
    int count=1;
    int max=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            count=1;
        }
        else if(a[i]==max)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/time-conversion/problem)