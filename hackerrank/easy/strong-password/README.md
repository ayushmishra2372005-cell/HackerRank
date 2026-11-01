# CamelCase

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Louise joined a social networking site to stay in touch with her friends. The signup page required her to input a *name* and a *password*. However, the password must be *strong*. The website considers a password to be *strong* if it satisfies the following criteria:

- Its length is at least $6$.  
- It contains at least one digit.  
- It contains at least one lowercase English character. 
- It contains at least one uppercase English character. 
- It contains at least one special character. The special characters are: `!@#$%^&*()-+`  

She typed a random string of length $n$ in the password field but wasn't sure if it was strong. Given the string she typed, can you find the minimum number of characters she must add to make her password strong?

*Note*: Here's the set of types of characters in a form you can paste in your solution:

```cpp14
numbers = "0123456789"
lower_case = "abcdefghijklmnopqrstuvwxyz"
upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
special_characters = "!@#$%^&*()-+"
```

**Example**  

$\text{password } = \text{'2bbbb'}$  

This password is 5 characters long and is missing an uppercase and a special character.  The minimum number of characters to add is $2$.  

$\text{password } = \text{'2bb#A'}$  

This password is 5 characters long and has at least one of each character type.  The minimum number of characters to add is $1$.    

**Function Description**  

Complete the _minimumNumber_ function in the editor below.  

_minimumNumber_ has the following parameters:  

- *int n:*  the length of the password  
- *string password:* the password to test  

**Returns**  

- *int:*  the minimum number of characters to add  


**Input Format**

The first line contains an integer $n$, the length of the password.

The second line contains the password string. Each character is either a lowercase/uppercase English alphabet, a digit, or a special character.


**Constraints**

- $1 \le n \le 100$  
- All characters in $password$ are in [a-z], [A-Z], [0-9], or [!@#$%^&*()-+ ].


**Output Format**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-01T13:36:04.332Z  

```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int count=1;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>=65&&s[i]<=90)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/strong-password/problem)