# Drawing Book

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

An avid hiker keeps meticulous records of their hikes. During the last hike that took exactly $steps$ steps, for every step it was noted if it was an *uphill*, $U$, or a *downhill*, $D$ step. Hikes always start and end at sea level, and each step up or down represents a $1$ unit change in altitude. We define the following terms:

- A *mountain* is a sequence of consecutive steps *above* sea level, starting with a step *up* from sea level and ending with a step *down* to sea level.  
- A *valley* is a sequence of consecutive steps *below* sea level, starting with a step *down* from sea level and ending with a step *up* to sea level.

Given the sequence of *up* and *down* steps during a hike, find and print the number of *valleys* walked through. 

**Example**  

$steps = 8$
$path=[DDUUUUDD]$  

The hiker first enters a valley $2$ units deep.  Then they climb out and up onto a mountain $2$ units high.  Finally, the hiker returns to sea level and ends the hike.  

**Function Description**  

Complete the *countingValleys* function in the editor below.  

countingValleys has the following parameter(s):  

- *int steps*: the number of steps on the hike  
- *string path*: a string describing the path  

**Returns**  

- *int:*  the number of valleys traversed 

**Input Format**

The first line contains an integer $steps$, the number of steps in the hike. 	
The second line contains a single string $path$, of $steps$ characters that describe the path.

**Constraints**

- $2 \leq steps \leq 10^6$  
- $path[i] \in \{UD\}$

**Output Format**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-02T14:54:52.881Z  

```cpp
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    int p;
    cin>>n;
    cin>>p;
    int count=p/2;
    int count1=(n/2)-(p/2);
    if(count1<count)
    {
        cout<<count1;
    }
    else 
    {
        cout<<count;
    }
    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/counting-valleys/problem)