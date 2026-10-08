# Repeated String

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

There is a string, $s$, of lowercase English letters that is repeated infinitely many times.  Given an integer, $n$, find and print the number of letter `a`'s in the first $n$ letters of the infinite string.

**Example**  
$s=\text{'abcac'}$  
$n = 10$  

The substring we consider is $abcacabcac$, the first $10$ characters of the infinite string.  There are $4$ occurrences of `a` in the substring.  

**Function Description**  

Complete the *repeatedString* function in the editor below.  

repeatedString has the following parameter(s):  

- *s:* a string to repeat  
- *n:* the number of characters to consider  

**Returns**  

- *int:* the frequency of `a` in the substring  

**Input Format**

The first line contains a single string, $s$. 		
The second line contains an integer, $n$.

**Constraints**

* $1 \le |s| \le 100$
* $1 \le n \le 10^{12}$
- For $\text{25%}$ of the test cases, $n \le 10^6$.

**Output Format**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-08T14:18:05.967Z  

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

[View on HackerRank](https://www.hackerrank.com/challenges/repeated-string/problem)