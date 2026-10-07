# Library Fine

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
**Submitted:** 2026-10-07T15:14:50.928Z  

```cpp
        if (b > e)
        p = 10000; 
    }
    {
    else if (c == f)
        {
            // Fixed: Same year, but returned in a later month
            int temp = b - e;
        }
        else if (b == e)
            p = temp * 500; // Fixed: Removed 'int' so it updates the outer 'p'
        {
            if (a > d)
            {
                // Fixed: Same year, same month, but returned on a later day
                int temp = a - d;
                p = temp * 15; // Fixed: Removed 'int' so it updates the outer 'p'
            }
        }
    }
    
    cout << p << endl;
    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/library-fine/problem)