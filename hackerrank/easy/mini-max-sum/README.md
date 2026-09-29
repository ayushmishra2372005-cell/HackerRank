# Mini-Max Sum

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers. Then print the respective minimum and maximum values as a single line of two space-separated long integers.  

**Example**   
$arr = [1, 3, 5, 7, 9]$

The minimum sum is $1 + 3 + 5 + 7 = 16$ and the maximum sum is $3 + 5 + 7 + 9 = 24$.  The function prints

    16 24
    
**Function Description**  

Complete the $miniMaxSum$ function with the following parameter(s):

- $arr[5]$: an array of $5$ integers  

**Print**   
  
Print two space-separated integers on one line: the minimum sum and the maximum sum of $4$ of $5$ elements.No value should be returned. 

**Note** For some languages, like C, C++, and Java, the sums may require that you use a long integer due to their size.

**Input Format**

A single line of five space-separated integers.

**Constraints**

$1 \le arr[i] \le 10^9$  

**Output Format**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-29T15:39:01.386Z  

```cpp
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int size = 5;
    int arr[size];
    for (int i=0; i<size; i++){
        cin>>arr[i];
    }
    int n = sizeof(arr)/ sizeof(arr[0]);
    sort(arr, arr+n);
    
    long long min = 0, max = 0;
    for (int i=0; i<size-1; i++){
        min += arr[i];
    }
    for (int i=1; i<size;i++){
        max+=arr[i];
    }
    cout<<min<<" "<<max;
    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/mini-max-sum/problem)