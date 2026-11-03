# Pangrams

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

A weighted string is a string of lowercase English letters where each letter has a *weight*.  Character weights are $1$ to $26$ from $a$ to $z$ as shown below:

![image](https://s3.amazonaws.com/hr-challenge-images/0/1484319110-9529e3b407-uniform.png)

- The _weight of a string_ is the sum of the weights of its characters.  For example: 

    ![image](https://s3.amazonaws.com/hr-challenge-images/0/1484319417-dadc155c1a-uniform1.png)
- A *uniform string* consists of a single character repeated zero or more times. For example, ``ccc`` and ``a`` are uniform strings, but ``bcb`` and `cd` are not.

Given a string, $s$, let $U$ be the set of weights for all possible uniform contiguous  [substrings](https://en.wikipedia.org/wiki/Substring) of string $s$. There will be $n$ queries to answer where each query consists of a single integer. Create a return array where for each query, the value is ``Yes`` if $query[i] \in U$.  Otherwise, append ``No``.

**Note:** The $\in$ symbol denotes that $x[i]$ is an [element of](https://en.wikipedia.org/wiki/Element_(mathematics)) set $U$.

**Example**   
$s = \text{'abbcccdddd'}$   
$queries = [1, 7, 5, 4, 15]$. 

Working from left to right, weights that exist are:

	string	weight
    a		1
    b		2
    bb		4
    c		3
    cc		6
    ccc		9
    d		4
    dd		8
    ddd		12
    dddd	16

Now for each value in $queries$, see if it exists in the possible string weights.  The return array is `['Yes', 'No', 'No', 'Yes', 'No']`.

**Function Description**  

Complete the *weightedUniformStrings* function in the editor below. 

weightedUniformStrings has the following parameter(s):  
- *string s:* a string  
- *int queries[n]:* an array of integers   

**Returns**  
-	*string[n]:* an array of strings that answer the queries

**Input Format**

The first line contains a string $s$, the original string. 	
The second line contains an integer $n$, the number of queries.		
Each of the next $n$ lines contains an integer $queries[i]$, the weight of a uniform subtring of $s$ that may or may not exist.

**Constraints**

* $ 1 \le length of s, n \le 10^5 $
* $ 1 \le queries[i] \le 10^7 $
* $s$ will only contain lowercase English letters, ascii[a-z].

**Output Format**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-03T17:40:08.323Z  

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

[View on HackerRank](https://www.hackerrank.com/challenges/weighted-uniform-string/problem)