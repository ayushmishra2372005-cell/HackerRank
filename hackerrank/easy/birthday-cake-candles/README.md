# Mini-Max Sum

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are in charge of the cake for a child's birthday. It will have one candle for each year of their total age. They will only be able to blow out the tallest of the candles. Your task is to count how many candles are the tallest.

**Example**  

$candles = [4, 4, 1, 3]$

The tallest candles are `4` units high. There are `2` candles with this height, so the function should return `2`.

**Function Description**

Complete the function $birthdayCakeCandles$ with the following parameter(s):

- $int\ candles[n]$: the candle heights     

**Returns**  

- $int$: the number of candles that are tallest


**Input Format**

The first line contains a single integer, $n$, the size of $candles[]$.  	
The second line contains $n$ space-separated integers, where each integer $i$ describes the height of $candles[i]$.

**Constraints**

- $1 \le n \le 10^{5}$  
- $1 \le candles[i] \le 10^{7}$  

**Output Format**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-29T15:39:04.770Z  

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

[View on HackerRank](https://www.hackerrank.com/challenges/birthday-cake-candles/problem)