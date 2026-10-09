# ACM ICPC Team

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Taum is planning to celebrate the birthday of his friend, Diksha. There are two types of gifts that Diksha wants from Taum: one is black and the other is white. To make her happy, Taum has to buy $b$ black gifts and $w$ white gifts. 

- The cost  of each black gift is $bc$ units.  
- The cost of every white gift is $wc$ units.  
- The cost to convert a black gift into white gift or vice versa is $z$ units.  

Determine the minimum cost of Diksha's gifts.  

**Example**  
$b = 3$  
$w = 5$   
$bc = 3$  
$wc = 4$  
$z = 1$  

He can buy a black gift for $3$ and convert it to a white gift for $1$, making the total cost of each white gift $4$.  That matches the cost of a white gift, so he can do that or just buy black gifts and white gifts.  Either way, the overall cost is $3 * 3 + 5 * 4 = 29$.  

**Function Description**  

Complete the function *taumBday* in the editor below.  It should return the minimal cost of obtaining the desired gifts.  

taumBday has the following parameter(s):  

- *int b*: the number of black gifts  
- *int w*: the number of white gifts  
- *int bc*: the cost of a black gift  
- *int wc*: the cost of a white gift  
- *int z*: the cost to convert one color gift to the other color  

**Returns**  

- *int:* the minimum cost to purchase the gifts  

**Input Format**

The first line will contain an integer $t$, the number of test cases. 

The next $t$ pairs of lines are as follows:  
- The first line contains the values of integers $b$ and $w$.   
- The next line contains the values of integers $bc$, $wc$, and $z$.  


**Constraints**

$1 \le t \le 10$  
$0 \le b, w,bc,wc,z \le 10^9$

**Output Format**

$t$ lines, each containing an integer: the minimum amount of units Taum needs to spend on gifts.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-09T14:30:43.466Z  

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

[View on HackerRank](https://www.hackerrank.com/challenges/taum-and-bday/problem)