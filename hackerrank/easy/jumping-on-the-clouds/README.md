# Repeated String

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

There is a new mobile game that starts with consecutively numbered clouds.  Some of the clouds are thunderheads and others are cumulus.  The player can jump on any cumulus cloud having a number that is equal to the number of the current cloud plus $1$ or $2$.  The player must avoid the thunderheads.  Determine the minimum number of jumps it will take to jump from the starting postion to the last cloud.  It is always possible to win the game.  

For each game, you will get an array of clouds numbered $0$ if they are safe or $1$ if they must be avoided.  

**Example**  
$c = [0,1,0,0,0,1,0]$  

Index the array from $0\ldots 6$.  The number on each cloud is its index in the list so the player must avoid the clouds at indices $1$ and $5$.  They could follow these two paths: $0 \to 2 \to 4 \to 6$ or $0 \to 2 \to 3 \to 4 \to 6$.  The first path takes $3$ jumps while the second takes $4$.  Return $3$.

**Function Description**  

Complete the *jumpingOnClouds* function in the editor below.  

jumpingOnClouds has the following parameter(s):  

- *int c[n]*: an array of binary integers  

**Returns**  

- *int:* the minimum number of jumps required

**Input Format**

The first line contains an integer $n$, the total number of clouds.	
The second line contains $n$ space-separated binary integers describing clouds $c[i]$ where $0 \le i \lt n$.


**Constraints**

* $2 \le n \le 100$
* $ c[i] \in \{0,1\}$
* $c[0] = c[n-1] = 0$

**Output Format**

Print the minimum number of jumps needed to win the game.

**Sample Input 0**

    7
    0 0 1 0 0 1 0
    
**Sample Output 0**

	4
    
**Explanation 0:**		
The player must avoid $c[2]$ and $c[5]$. The game can be won with a minimum of $4$ jumps:

<img src="https://s3.amazonaws.com/hr-challenge-images/20832/1461134731-c258160d15-jump2.png" title="jump(2).png" />
    
**Sample Input 1**

    6
    0 0 0 0 1 0
    
**Sample Output 1**

	3
    
**Explanation 1:**	
The only thundercloud to avoid is $c[4]$. The game can be won in $3$ jumps:

<img src="https://s3.amazonaws.com/hr-challenge-images/20832/1461136358-764298d363-jump5.png" title="jump(5).png" />

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-08T14:18:10.041Z  

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    
    // FIXED: Changed from 'int' to 'long long' to prevent 1-trillion limit overflow
    long long n; 
    cin >> n;
    
    long long len = s.length();
    
    // Step 1: Count occurrences of 'a' in the single original string
    long long base_count = 0;
    for(int i = 0; i < len; i++)
    {
        if(s[i] == 'a')
        {
            base_count++;
        }
    }
    
    // Step 2: Calculate how many times the full string fits into 'n'
    long long full_repeats = n / len;
    long long total_count = full_repeats * base_count;
    
    // Step 3: Handle the remaining leftover portion of the string
    long long leftovers = n % len;
    for(int i = 0; i < leftovers; i++)
    {
        if(s[i] == 'a')
        {
            total_count++;
        }
    }
    
    cout << total_count << "\n";
    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/jumping-on-the-clouds/problem)