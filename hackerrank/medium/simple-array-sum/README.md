# Solve Me First

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array of integers, find the sum of its elements.

For example, if the array $ar = [1,2,3]$, $1 + 2 + 3 = 6$, so return $6$.  

**Function Description**

Complete the $simpleArraySum$ function with the following parameter(s):  

- $ar[n]$: an array of integers  

**Returns**

- $int$: the sum of the array elements

**Input Format**

The first line contains an integer, $n$, denoting the size of the array. 	
The second line contains $n$ space-separated integers representing the array's elements.  

**Constraints**

 $0 \lt n, ar[i] \le 1000$    

**Output Format**

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-27T05:28:19.879Z  

```java
import java.util.*;

public class Solution {

    // static int solveMeFirst(int a, int b) {
    //   // Hint: Type return a+b; below 
	// }

  
   public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a;
        a = in.nextInt();
        int b;
        b = in.nextInt();
        in.close();
        int sum;
        sum = a+b;
        System.out.println(sum);
	}
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/simple-array-sum/problem)