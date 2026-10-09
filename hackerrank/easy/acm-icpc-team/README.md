# ACM ICPC Team

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

There are a number of people who will be attending [ACM-ICPC World Finals](https://en.wikipedia.org/wiki/ACM_International_Collegiate_Programming_Contest). Each of them may be well versed in a number of topics. Given a list of topics known by each attendee, presented as binary strings, determine the maximum number of topics a 2-person team can know. Each subject has a column in the binary string, and a '1' means the subject is known while '0' means it is not.  Also determine the number of teams that know the maximum number of topics.  Return an integer array with two elements.  The first is the maximum number of topics known, and the second is the number of teams that know that number of topics.  

**Example**  

$n = 3$  
$topics = \text{['10101', '11110', '00010']}$  

The attendee data is aligned for clarity below:

    10101
    11110
    00010

These are all possible teams that can be formed:

    Members	Subjects
    (1,2)   [1,2,3,4,5]
    (1,3)   [1,3,4,5]
    (2,3)   [1,2,3,4]
    
In this case, the first team will know all _5_ subjects.  They are the only team that can be created that knows that many subjects, so $[5, 1]$ is returned.

**Function Description**  

Complete the *acmTeam* function in the editor below.   
acmTeam has the following parameter(s):  

- *string topic:* a string of binary digits  

**Returns**  

- *int[2]:*  the maximum topics and the number of teams that know that many topics   

**Input Format**

The first line contains two space-separated integers $n$ and $m$, where $n$ is the number of attendees and $m$ is the number of topics.  

Each of the next $n$ lines contains a binary string of length $m$.  

**Constraints**

$2 \le n \le 500$  
$1 \le m \le 500$ 

**Output Format**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-09T14:30:38.341Z  

```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<string> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int max=0;
    int team=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int c=0;
            for(int k=0;k<m;k++)
            {
                if(a[i][k]=='1'||a[j][k]=='1')
                {
                    c++;
                }
            }
            if(c>max)
            {
                max=c;
                team=1;
            }
            else if(c==max&&max>0)
            {
                team++;
            }
        }
    }
    cout<<max<<endl;
    cout<<team<<endl;
    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/acm-icpc-team/problem)