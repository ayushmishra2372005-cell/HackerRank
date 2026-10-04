# Climbing the Leaderboard

![Difficulty](https://img.shields.io/badge/Difficulty-Hard-red)

## Problem

A video player plays a game in which the character competes in a hurdle race.  Hurdles are of varying heights, and the characters have a maximum height they can jump.  There is a magic potion they can take that will increase their maximum jump height by $1$ unit for each dose.  How many doses of the potion must the character take to be able to jump all of the hurdles.  If the character can already clear all of the hurdles, return $0$.

**Example**  
$height = [1, 2, 3, 3, 2]$  
$k = 1$  

The character can jump $1$ unit high initially and must take $3 - 1 = 2$ doses of potion to be able to jump all of the hurdles.   

**Function Description**  

Complete the *hurdleRace* function in the editor below.    

hurdleRace has the following parameter(s):  

- *int k*: the height the character can jump naturally  
- *int height[n]*: the heights of each hurdle  

**Returns**  

- *int:* the minimum number of doses required, always $0$ or more

**Input Format**

The first line contains two space-separated integers $n$ and $k$, the number of hurdles and the maximum height the character can jump naturally.  	
The second line contains $n$ space-separated integers $height[i]$ where $0 \le i \lt n$.

**Constraints**

* $1 \le n, k \le 100$  
* $1 \le height[i] \le 100$  

**Output Format**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-04T13:40:57.032Z  

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    int b;
    cin >> b;
    int c[b];
    for(int i = 0; i < b; i++)
    {
        cin >> c[i];
    }
    
    int pos = 0;
    int unique[n];
    unique[pos++] = a[0];
    
    // FIXED: Start loop from i = 1 and check dynamic index positions (i vs i-1)
    for(int i = 1; i < n; i++)
    {
        if(a[i] != a[i - 1])
        {
            unique[pos++] = a[i];
        }
    }
    
    int j = pos - 1;
    for(int i = 0; i < b; i++)
    {
        while(j >= 0 && c[i] >= unique[j])
        {
            j--;
        }
        cout << (j + 1) + 1 << endl;
    }
    
    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/the-hurdle-race/problem)