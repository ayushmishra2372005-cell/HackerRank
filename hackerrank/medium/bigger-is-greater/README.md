# Bigger is Greater

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

<!-- 
**Please note that this is a team event, and your submission will be accepted only as a part of a team, even single member teams are allowed. Please click [here](https://www.hackerrank.com/auth/create_team/csindia) to register as a team, if you have NOT already registered.**
-->

_[Lexicographical order](https://en.wikipedia.org/wiki/Lexicographical_order)_ is often known as alphabetical order when dealing with strings.  A string is _greater_ than another string if it comes later in a lexicographically sorted list.

Given a word, create a new word by swapping some or all of its characters.  This new word must meet two criteria:

- It must be greater than the original word
- It must be the smallest word that meets the first condition

**Example**   
$w = \texttt{abcd}$

The next largest word is $\texttt{abdc}$.  

Complete the function *biggerIsGreater* below to create and return the new string meeting the criteria.  If it is not possible, return `no answer`.

**Function Description**  

Complete the *biggerIsGreater* function in the editor below.  

biggerIsGreater has the following parameter(s):  

- *string w*: a word

**Returns**   
- *string:* the smallest lexicographically higher string possible or `no answer`  

**Input Format**

The first line of input contains $T$, the number of test cases.   
Each of the next $T$ lines contains $w$.





**Constraints**

* $1 \le T \le 10^5$  
* $1 \le length of w \le 100$  
* $w$ will contain only letters in the range ascii[a..z].

**Output Format**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-12T13:25:03.287Z  

```cpp
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string s;
        cin>>s;
        if(next_permutation(s.begin(),s.end()))
        {
            cout<<s<<endl;
        }
        else 
        {
            cout<<"no answer"<<endl;
        }
    }
    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/bigger-is-greater/problem)