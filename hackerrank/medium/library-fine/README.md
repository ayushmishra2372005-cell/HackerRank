# Sherlock and Squares

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Your local library needs your help! Given the expected and actual return dates for a library book, create a program that calculates the fine (if any). The fee structure is as follows:	

1. If the book is returned on or before the expected return date, no fine will be charged (i.e.: $fine = 0)$.
2. If the book is returned after the expected return *day* but still within the same calendar month and year as the expected return date, $fine = 15 \text{ Hackos } \times \text{ (the number of days late)}$.	
3. If the book is returned after the expected return *month* but still within the same calendar year as the expected return date, the $fine = 500 \text{ Hackos } \times \text{ (the number of months late)}$.   
4. If the book is returned after the calendar *year* in which it was expected, there is a fixed fine of $10000 \text{ Hackos}$.

Charges are based only on the least precise measure of lateness.  For example, whether a book is due January 1, 2017 or December 31, 2017, if it is returned January 1, 2018, that is a year late and the fine would be $10,000 \text{ Hackos}$.  

**Example**  
$d1, m1, y1 = 14, 7, 2018$  
$d2, m2, y2 = 5, 7, 2018$  

The first values are the return date and the second are the due date.  The years are the same and the months are the same.  The book is $14 - 5 = 9$ days late.  Return $9 * 15 = 135$.  

**Function Description**  

Complete the *libraryFine* function in the editor below.  

libraryFine has the following parameter(s):  

- *d1, m1, y1*: returned date day, month and year, each an integer  
- *d2, m2, y2*: due date day, month and year, each an integer    

**Returns**  

- *int:*  the amount of the fine or $0$ if there is none

**Input Format**

The first line contains $3$ space-separated integers, $d1, m1, y1$, denoting the respective $day$, $month$, and $year$ on which the book was returned.		
The second line contains $3$ space-separated integers, $d2, m2, y2$, denoting the respective $day$, $month$, and $year$ on which the book was due to be returned.

**Constraints**

- $1 \le d1, d2 \le 31$		
- $1 \le m1, m2 \le 12$		
- $1 \le y1, y2 \le 3000$  
- $\text{It is guaranteed that the dates will be valid Gregorian calendar dates.}$  

**Output Format**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-07T15:03:11.444Z  

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        int a, b;
        cin >> a >> b;
        int count = 0;
        
        // Fixed: Start 'j' at the square root of 'a' and stop at the square root of 'b'
        // This avoids calculating unnecessary squares and runs instantly!
        int start = sqrt(a);
        int end = sqrt(b);
        
        for(int j = start; j <= end; j++)
        {
            int n = j * j;
            if(n >= a && n <= b)
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/library-fine/problem)