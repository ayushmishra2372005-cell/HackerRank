# Insertion Sort - Part 2

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

In _Insertion Sort Part 1_, you inserted one element into an array at its correct sorted position. Using the same approach repeatedly, can you sort an entire array?

_Guideline:_ You already can place an element into a sorted array. How can you use that code to build up a sorted array, one element at a time? Note that in the first step, when you consider an array with just the first element, it is already sorted since there's nothing to compare it to.

In this challenge, print the array after each iteration of the insertion sort, i.e., whenever the next element has been inserted at its correct position.  Since the array composed of just the first element is already sorted, begin printing after placing the second element.

**Example**. 

$n = 7$  
$arr = [3, 4, 7, 5, 6, 2, 1]$   

Working from left to right, we get the following output:

```
3 4 7 5 6 2 1
3 4 7 5 6 2 1
3 4 5 7 6 2 1
3 4 5 6 7 2 1
2 3 4 5 6 7 1
1 2 3 4 5 6 7
```

**Function Description**

Complete the *insertionSort2* function in the editor below.  

insertionSort2 has the following parameter(s):  

- *int n:* the length of $arr$  
- *int arr[n]:* an array of integers  

**Prints**  

At each iteration, print the array as space-separated integers on its own line.  

**Input Format**

 The first line contains an integer, $n$, the size of $arr$.  
 The next line contains $n$ space-separated integers $arr[i]$.  
 

**Constraints**

 $1 \le n \le 1000$   
$-10000 \le arr[i] \le 10000, 0 \leq i \lt n$ 


**Output Format**

Print the entire array on a new line at every iteration.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-29T17:41:44.903Z  

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

    // Outer loop runs from 1 to n - 1 (n - 1 print passes required)
    for (int i = 1; i < n; i++)
    {
        // Walk backwards from i to insert a[i] into the sorted prefix
        for (int j = i; j > 0; j--)
        {
            if (a[j] < a[j - 1])
            {
                int temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
            else
            {
                break; // Stop shifting once it is in the correct position
            }
        }

        // Print the array after each insertion
        for (int m = 0; m < n; m++)
        {
            cout << a[m] << " ";
        }
        cout << endl;
    }

    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/insertionsort2/problem)