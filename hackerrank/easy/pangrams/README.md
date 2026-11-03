# Pangrams

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

A *pangram* is a string that contains every letter of the alphabet.  Given a sentence determine whether it is a pangram in the English alphabet.  Ignore case.  Return either `pangram` or `not pangram` as appropriate.

**Example**  
$s = \text{'The quick brown fox jumps over the lazy dog'}$  

The string contains all letters in the English alphabet, so return `pangram`.

**Function Description**

Complete the function *pangrams* in the editor below.  It should return the string `pangram` if the input string is a pangram.  Otherwise, it should return `not pangram`.  

pangrams has the following parameter(s):

- *string s:* a string to test  

**Returns**  

- *string:* either `pangram` or `not pangram`  

**Input Format**

 A single line with string $s$. 



**Constraints**

$0 \lt \text{ length of } s  \le 10^3$  
Each character of $s$, $s[i] \in \{a-z, A-Z, \textit{space}\}$
 

**Output Format**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-03T17:39:51.873Z  

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s); // Reads the whole sentence with spaces

    // Array to track if each letter a-z is present
    vector<bool> present(26, false);

    for (int i = 0; i < s.length(); i++)
    {
        char ch = tolower(s[i]);
        if (ch >= 'a' && ch <= 'z')
        {
            present[ch - 'a'] = true;
        }
    }

    // Count how many unique letters were found
    int c = 0;
    for (int i = 0; i < 26; i++)
    {
        if (present[i])
        {
            c++;
        }
    }

    if (c == 26)
    {
        cout << "pangram";
    }
    else
    {
        cout << "not pangram";
    }

    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/pangrams/problem)