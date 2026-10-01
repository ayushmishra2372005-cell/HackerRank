# Between Two Sets

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Maria plays college basketball and wants to go pro.  Each season she maintains a record of her play.  She tabulates the number of times she breaks her season record for *most points* and *least points* in a game.  Points scored in the first game establish her record for the season, and she begins counting from there.

**Example**  
$scores = [12, 24, 10, 24]$   

Scores are in the same order as the games played.  She tabulates her results as follows:

<pre>
									 Count
    Game  Score  Minimum  Maximum   Min Max
     0      12     12       12       0   0
     1      24     12       24       0   1
     2      10     10       24       1   1
     3      24     10       24       1   1
</pre>

Given the scores for a season, determine the number of times Maria breaks her records for *most* and *least* points scored during the season.

**Function Description**  

Complete the *breakingRecords* function in the editor below. 

breakingRecords has the following parameter(s):  

- *int scores[n]:* points scored per game   

**Returns**   

- *int[2]:* An array with the numbers of times she broke her records. Index $0$ is for breaking *most points* records, and index $1$ is for breaking *least points* records.  

**Input Format**

The first line contains an integer $n$, the number of games.  		
The second line contains $n$ space-separated integers describing the respective values of $score_0, score_1, \ldots, score_{n-1}$.

**Constraints**

* $1 \le n \le 1000$
* $0 \le scores[i] \le 10^8$

**Output Format**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-01T17:23:26.468Z  

```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    int b[m];
    int count=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    for(int x=1;x<=100;x++)
    {
        bool fits_condition_1 = true;
        bool fits_condition_2 = true;
        for(int i = 0; i < n; i++)
        {
            if(x % a[i] != 0)
            {
                fits_condition_1 = false;
                break;
            }
        }
        for(int i = 0; i < m; i++)
        {
            if(b[i]%x != 0)
            {
                fits_condition_2 = false;
                break;
            }
        }
        if(fits_condition_1 && fits_condition_2)
        {
            count++;
        }
    }
    
    cout << count << endl;
    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem)