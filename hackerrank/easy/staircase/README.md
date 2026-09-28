# Plus Minus

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
**Submitted:** 2026-09-28T15:28:53.121Z  

```cpp
#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    double pos=0;
    double neg=0;
    double z=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            neg++;
        }
        else if(arr[i]>0)
        {
            pos++;   
        }
        else
        {
            z++;
        }
    }
    double a=neg/n;
    double b=pos/n;
    double c=z/n;
    cout<<fixed<<setprecision(6)<<b<<endl;
    cout<<fixed<<setprecision(6)<<a<<endl;
    cout<<fixed<<setprecision(6)<<c<<endl;
    return 0;
}


```

---

[View on HackerRank](https://www.hackerrank.com/challenges/staircase/problem)