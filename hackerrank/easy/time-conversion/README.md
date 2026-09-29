# Time Conversion

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
**Submitted:** 2026-09-29T16:07:10.601Z  

```cpp
#include <bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int hour=stoi(s.substr(0,2));
    string a=s.substr(8,2);
    if(a=="AM"&&hour==12)
    {
        s[0]='0';s[1]='0';
    }
    else if(a=="PM"&&hour!=12)
    {
        hour=hour+12;
        string n=to_string(hour);
        s[0]=n[0];
        s[1]=n[1];   
    }
    cout<<s.substr(0,8)<<endl;
    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/time-conversion/problem)