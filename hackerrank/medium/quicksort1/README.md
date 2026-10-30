# Quicksort 1 - Partition

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

The previous challenges covered [Insertion Sort](https://en.wikipedia.org/wiki/Insertion_sort), which is a simple and intuitive sorting algorithm with a running time of $O(n^2)$. In these next few challenges, we're covering a *divide-and-conquer* algorithm called [Quicksort](https://en.wikipedia.org/wiki/Quicksort) (also known as *Partition Sort*).  This challenge is a modified version of the algorithm that only addresses partitioning.  It is implemented as follows: 

**Step 1: Divide** 	
Choose some pivot element, $p$, and partition your unsorted array, $arr$, into three smaller arrays: $left$, $right$, and $equal$, where each element in $left \lt p$, each element in $right \gt p$, and each element in $equal = p$. 

**Example**   
$arr = [5, 7, 4, 3, 8]$   

In this challenge, the pivot will always be at $arr[0]$, so the pivot is $5$.
 
$arr$ is divided into $left = \{4, 3\}$, $equal = \{5\}$, and $right = \{7, 8\}$.  
Putting them all together, you get $\{4, 3, 5, 7, 8\}$. There is a flexible checker that allows the elements of $left$ and $right$ to be in any order.  For example, $\{3,4, 5,8,7\}$ is valid as well.    
  
Given $arr$ and $p=arr[0]$, partition $arr$ into $left$, $right$, and $equal$ using the *Divide* instructions above. Return a 1-dimensional array containing each element in $left$ first, followed by each element in $equal$, followed by each element in $right$.   

**Function Description**  

Complete the *quickSort* function in the editor below.     

quickSort has the following parameter(s):  

- *int arr[n]:* $arr[0]$ is the pivot element    

**Returns**   

- *int[n]:* an array of integers as described above   

**Input Format**

The first line contains $n$, the size of $arr$.			
The second line contains $n$ space-separated integers $arr[i]$ (the unsorted array). The first integer, $arr[0]$, is the pivot element, $p$.


**Constraints**

- $1 \le n \le 1000$   
- $-1000 \le arr[i] \le 1000$ where $0 \leq i \lt n$   
- All elements are distinct.


**Output Format**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-30T18:23:02.391Z  

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[i]) // Compare directly with a[i]
            {
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/quicksort1/problem)