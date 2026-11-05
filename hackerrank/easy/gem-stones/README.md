# Funny String

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

There is a collection of rocks where each rock has various minerals embeded in it.  Each type of mineral is designated by a lowercase letter in the range $ascii[a-z]$. There may be multiple occurrences of a mineral in a rock. A mineral is called a _gemstone_ if it occurs at least once in each of the rocks in the collection.

Given a list of minerals embedded in each of the rocks, display the number of types of gemstones in the collection.

**Example**  
$arr = \text{['abc', 'abc', 'bc']}$  

The minerals $b$ and $c$ appear in each rock, so there are $2$ gemstones.

**Function Description**  

Complete the *gemstones* function in the editor below.    

gemstones has the following parameter(s):  

- *string arr[n]:* an array of strings   

**Returns**  

- *int:* the number of gemstones found 

**Input Format**

The first line consists of an integer $n$, the size of $arr$.  
Each of the next $n$ lines contains a string $arr[i]$ where each letter represents an occurence of a mineral in the current rock.

**Constraints**

$1 \le n \le 100$   
$1 \le$ | arr[i] | $\le 100$  
Each composition $arr[i]$ consists of only lower-case Latin letters ('a'-'z').  


**Output Format**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-05T17:46:47.741Z  

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int w;
    cin >> w;
    for (int k = 0; k < w; k++)
    {
        string s;
        cin >> s;

        int n = s.length();
        bool isFunny = true;

        // Compare adjacent differences from the front and back simultaneously
        for (int i = 1; i < n; i++)
        {
            int diff_forward = abs(s[i] - s[i - 1]);
            int diff_reverse = abs(s[n - 1 - i] - s[n - i]);

            if (diff_forward != diff_reverse)
            {
                isFunny = false;
                break;
            }
        }

        if (isFunny)
        {
            cout << "Funny" << endl;
        }
        else
        {
            cout << "Not Funny" << endl;
        }
    }
    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/gem-stones/problem)