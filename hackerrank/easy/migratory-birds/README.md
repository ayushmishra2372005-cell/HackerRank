# Divisible Sum Pairs

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an array of bird sightings where every element represents a bird type id, determine the id of the most frequently sighted type.  If more than 1 type has been spotted that maximum amount, return the smallest of their ids.

**Example**    
$arr = [1,1,2,2,3]$   

There are two each of types $1$ and $2$, and one sighting of type $3$.  Pick the lower of the two types seen twice: type $1$.  

**Function Description**

Complete the *migratoryBirds* function in the editor below.    

migratoryBirds has the following parameter(s):  

- *int arr[n]*: the types of birds sighted   

**Returns**   

- *int:* the lowest type id of the most frequently sighted birds   

**Input Format**

The first line contains an integer, $n$, the size of $arr$.		
The second line describes $arr$ as $n$ space-separated integers, each a type number of the bird sighted.

**Constraints**

+ $5 \le n \le 2 \times 10^5$
- It is guaranteed that each type is $1$, $2$, $3$, $4$, or $5$.

**Output Format**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-01T18:01:00.996Z  

```cpp
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((a[i]+a[j])%k==0)
            {
                count++;
            }
        }
    }
    cout<<count;
    return 0;
} 

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/migratory-birds/problem)