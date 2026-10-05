# Angry Professor

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

A Discrete Mathematics professor has a class of students. Frustrated with their lack of discipline, the professor decides to cancel class if fewer than some number of students are present when class starts.  Arrival times go from on time ($arrivalTime \le 0$) to arrived late ($arrivalTime \gt 0$).

Given the arrival time of each student and a threshhold number of attendees, determine if the class is cancelled.  

**Example**  

$n = 5$  
$k = 3$  
$a = [-2, -1, 0, 1, 2]$  

The first $3$ students arrived on.  The last $2$ were late.  The threshold is $3$ students, so class will go on.  Return `YES`.   

**Note:** Non-positive arrival times ($a[i] \le 0$) indicate the student arrived early or on time; positive arrival times ($a[i] \gt 0$) indicate the student arrived $a[i]$ minutes late.  

**Function Description**

Complete the *angryProfessor* function in the editor below.  It must return `YES` if class is cancelled, or `NO` otherwise.  

angryProfessor has the following parameter(s):  

-  *int k*: the threshold number of students  
-  *int a[n]*: the arrival times of the $n$ students

**Returns**  

- *string:*  either `YES` or `NO`

**Input Format**

The first line of input contains $t$, the number of test cases. 

Each test case consists of two lines.  

The first line has two space-separated integers, $n$ and $k$, the number of students (size of $a$) and the cancellation threshold.  
The second line contains $n$ space-separated integers ($a[1], a[2], \ldots, a[n]$) that describe the arrival times for each student.


**Constraints**

- $1 \le t \le 10$  
- $1 \le n \le 1000$  
- $1 \le k \le n$  
- $-100 \le a[i] \le 100, where\ i \in [1,\ldots n]$

**Output Format**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-05T14:02:27.547Z  

```cpp
#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    
    for (int i = 0; i < a; i++) {
        int n;
        cin >> n;
        int k;
        cin >> k;
        
        int count = 0;
        for (int j = 0; j < n; j++) { // Fixed: Changed inner variable 'i' to 'j'
            int val;
            cin >> val;
            if (val <= 0) {          // Fixed: On-time/early students are <= 0
                count++;
            }
        }
        if (count < k) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}


```

---

[View on HackerRank](https://www.hackerrank.com/challenges/angry-professor/problem)