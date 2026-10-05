# Beautiful Days at the Movies

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

HackerLand Enterprise is adopting a new viral advertising strategy. When they launch a new product, they advertise it to exactly $5$ people on social media. 

On the first day, half of those $5$ people (i.e., $floor(\frac{5}{2}) = 2$) like the advertisement and each shares it with $3$ of their friends. At the beginning of the second day, $floor(\frac{5}{2}) \times 3 = 2 \times 3 = 6$ people receive the advertisement. 

Each day, $floor(\frac{recipients}{2})$ of the recipients like the advertisement and will share it with $3$ friends on the following day.  Assuming nobody receives the advertisement twice, determine how many people have liked the ad by the end of a given day, beginning with launch day as day $1$.

**Example**  
$n = 5$. 

```
Day Shared Liked Cumulative
1      5     2       2
2      6     3       5
3      9     4       9
4     12     6      15
5     18     9      24
```

The progression is shown above.  The cumulative number of likes on the $5^{th}$ day is $24$.  

**Function Description**  

Complete the *viralAdvertising* function in the editor below.    

viralAdvertising has the following parameter(s):  

- *int n:* the day number to report  

**Returns**  

- *int:* the cumulative likes at that day   

**Input Format**

A single integer, $n$, the day number.

**Constraints**

- $1 \le n \le 50$

**Output Format**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-05T14:23:23.219Z  

```cpp
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int count = 0;
    
    for (int i = a; i <= b; i++)
    {
        // Use a temporary variable so we don't accidentally modify 'i'
        int temp = i; 
        int reverse = 0;
        
        // This loop extracts ALL digits of the current number 'temp'
        while (temp > 0) 
        {
            reverse = (reverse * 10) + (temp % 10);
            temp /= 10;
        }
        
        // Fixed: Check the difference between the current day 'i' and its 'reverse'
        int d = abs(i - reverse);
        if (d % c == 0)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/strange-advertising/problem)