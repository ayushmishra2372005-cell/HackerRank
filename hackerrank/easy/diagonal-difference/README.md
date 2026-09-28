# Diagonal Difference

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a square matrix, calculate the absolute difference between the sums of its diagonals.  
  
For example, the square matrix $arr$ is shown below:  

	1 2 3
    4 5 6
    9 8 9  
    
- The left-to-right diagonal = $1 + 5 + 9 = 15$.    
- The right-to-left diagonal = $3 + 5 + 9 = 17$.    

Their absolute difference is $|15 - 17| = 2$.  

**Function description**

Complete the $\textit{diagonalDifference}$ function with the following parameter:  
  
-	$int\ arr[n][m]$: a 2-D array of integers 
    
**Return**  

-	$int$: the absolute difference in sums along the diagonals	

**Input Format**

The first line contains a single integer, $n$,  the number of rows and columns in the square matrix $arr$.  
Each of the next $n$ lines describes a row, $arr[i]$, and consists of $n$ space-separated integers $arr[i][j]$.

**Constraints**

+ $-100 \le arr[i][j] \le 100$

**Output Format**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-28T15:17:07.963Z  

```cpp
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n][n];
    int first_diagonal=0, second_diagonal=0;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (i==j){
                first_diagonal = arr[i][j]+first_diagonal;
            }
            if(i+j==n-1){
                second_diagonal = arr[i][j]+second_diagonal;
            }
        }
    }
    cout<<abs(second_diagonal-first_diagonal)<<endl;
    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/diagonal-difference/problem)