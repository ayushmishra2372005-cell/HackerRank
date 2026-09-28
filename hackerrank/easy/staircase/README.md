# Staircase

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Staircase detail

This is a staircase of size $n = 4$:

	   #
	  ##
	 ###
	####

Its base and height are both equal to $n$.  It is drawn using `#` symbols and spaces. **The last line is not preceded by any spaces.** 

Write a program that prints a staircase of size $n$.  

**Function Description**

Complete the $staircase$ function with the following parameter(s):  

- $int\ n$: an integer  

**Print**  

Print a staircase as described above. No value should be returned.  
**Note**: The last line is not preceded by spaces. All lines are right-aligned.

**Input Format**

A single integer, $n$, denoting the size of the staircase.

**Constraints**

$0 \lt n \le 100$ .  

**Output Format**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-28T15:50:24.965Z  

```cpp
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<(n-i);j++)
        {
            cout<<" ";
        }
        for(int k=0;k<i;k++)
        {
            cout<<"#";
        }
        cout<<endl;
    }

    return 0;
}


```

---

[View on HackerRank](https://www.hackerrank.com/challenges/staircase/problem)