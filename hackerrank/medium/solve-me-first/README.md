# Solve Me First

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Complete the function $solveMeFirst$ to compute the sum of two integers.

**Example**  
$a = 7$  
$b = 3$  

Return $10$.

**Function Description**  

Complete the $solveMeFirst$ function with the following parameters:  

- $int\ a$: the first value
- $int\ b$: the second value

Returns  
- $int$: the sum of $a$ and $b$


**Input Format**

 

**Constraints**

 $1 \le a, b \le 1000$   

**Output Format**

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-27T05:28:14.556Z  

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

[View on HackerRank](https://www.hackerrank.com/challenges/solve-me-first/problem)