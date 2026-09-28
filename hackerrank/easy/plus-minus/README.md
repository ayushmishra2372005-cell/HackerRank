# Plus Minus

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an array of integers, calculate the ratios of its elements that are $positive$, $negative$, and $zero$. Print the decimal value of each fraction on a new line with 6 places after the decimal.

**Note:** This challenge introduces precision problems. The test cases are scaled to six decimal places, though answers with absolute error of up to $10^{-4}$ are acceptable.

**Example**  
$arr = [1,1,0,-1,-1]$  

There are $n=5$ elements: two positive, two negative and one zero.  Their ratios are $\frac{2}{5} = 0.400000$, $\frac{2}{5} = 0.400000$ and $\frac{1}{5} = 0.200000$.  Results are printed as:  

    0.400000
    0.400000
    0.200000
    
**Function Description**

Complete the $plusMinus$ function with the following parameter(s):

- $int\ arr[n]$: an array of integers

**Print**  
	Print the ratios of positive, negative and 	zero values in the array.  Each value should be printed on a separate line with $6$ digits after the decimal.  The function should not return a value.  

**Input Format**

The first line contains an integer, $n$, the size of the array.	 
The second line contains $n$ space-separated integers that describe $arr[n]$.

**Constraints**

$0 \lt n \le 100$  
$-100 \le arr[i] \le 100$  

**Output Format**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-28T15:28:48.662Z  

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

[View on HackerRank](https://www.hackerrank.com/challenges/plus-minus/problem)