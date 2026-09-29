# Time Conversion

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

The Utopian Tree goes through _2_ cycles of growth every year. Each spring, it _doubles_ in height. Each summer, its height increases by _1_ meter.

A Utopian Tree sapling with a height of *1* meter is planted at the onset of spring. How tall will the tree be after $n$ growth cycles?

For example, if the number of growth cycles is $n = 5$, the calculations are as follows:

    Period  Height
    0          1
    1          2
    2          3
    3          6
    4          7
    5          14
    
**Function Description**

Complete the *utopianTree* function in the editor below.   

utopianTree has the following parameter(s):

- *int n*:  the number of growth cycles to simulate  

**Returns**  

- *int:* the height of the tree after the given number of cycles  


**Input Format**

The first line contains an integer, $t$, the number of test cases.	
$t$ subsequent lines each contain an integer, $n$, the number of cycles for that test case.



**Constraints**

$1 \le t \le 10$  
$0 \le n \le 60$

**Output Format**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-29T16:07:14.238Z  

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

[View on HackerRank](https://www.hackerrank.com/challenges/utopian-tree/problem)