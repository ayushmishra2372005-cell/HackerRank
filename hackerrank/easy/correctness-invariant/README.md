# Correctness and the Loop Invariant

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

In the previous challenge, you wrote code to perform an _Insertion Sort_ on an unsorted array. But how would you prove that the code is correct? I.e. how do you show that for any input your code will provide the right output?

**Loop Invariant**  
In computer science, you could prove it formally with a _loop invariant_, where you state that a desired property is maintained in your loop. Such a proof is broken down into the following parts:

 - _Initialization_: It is true (in a limited sense) before the loop runs.
 - _Maintenance_: If it's true before an iteration of a loop, it remains true before the next iteration.
 - _Termination_: It will terminate in a useful way once it is finished. 

**Insertion Sort's Invariant**  
Say, you have some InsertionSort code, where the outer loop goes through the whole array $A$:

    for(int i = 1; i < A.length; i++){
    //insertion sort code

You could then state the following loop invariant:

> At the start of every iteration of the outer loop (indexed with $i$), the subarray until $ar[i]$ consists of the original elements that were there, but in sorted order. 

To prove Insertion Sort is correct, you will then demonstrate it for the three stages:

- _Initialization_ - The subarray starts with the first element of the array, and it is (obviously) sorted to begin with.

- _Maintenance_ - Each iteration of the loop expands the subarray, but keeps the sorted property. An element $V$  gets inserted into the array only when it is greater than the element to its left. Since the elements to its left have already been sorted, it means $V$ is greater than all the elements to its left, so the array remains sorted. (In _Insertion Sort 2_ we saw this by printing the array each time an element was properly inserted.)  
 
- _Termination_ - The code will terminate after $i$ has reached the last element in the array, which means the sorted subarray has expanded to encompass the entire array. The array is now fully sorted.

![Loop Invariant Chart](https://s3.amazonaws.com/hr-challenge-images/insertion-sort/InsertionSortCorrect-small.png)

You can often use a similar process to demonstrate the correctness of many algorithms. You can see [these notes](http://www.cs.uofs.edu/~mccloske/courses/cmps144/invariants_lec.html) for more information.

**Challenge**

In the InsertionSort code below, there is an error. Can you fix it? Print the array only once, when it is fully sorted. 



**Input Format**

 There will be two lines of input:

 - $s$ - the size of the array
 - $arr$ - the list of numbers that makes up the array
 

**Constraints**

 $1 \le s \le 1000$   
$-1500 \le V \le 1500, V ∈ arr$


**Output Format**

Output the numbers in order, space-separated on one line.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-25T18:29:30.806Z  

```cpp
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int k=0;k<n;k++)
    {
          for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int temp=0;
            if(a[i]>a[j])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
                break;
            }
            break;
        }
    }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/correctness-invariant/problem)