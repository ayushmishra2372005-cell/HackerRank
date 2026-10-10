# Encryption

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

An English text needs to be encrypted using the following encryption scheme.  
First, the spaces are removed from the text. Let $L$ be the length of this text.  
Then, characters are written into a grid, whose rows and columns have the following constraints:

$$\lfloor\sqrt{L}\rfloor \le row \le column \le \lceil\sqrt{L}\rceil\text{, where }\lfloor x \rfloor \text{ is floor function and }\lceil x \rceil\text{ is ceil function}$$ 
 
**Example**  

$s = \texttt{if man was meant to stay on the ground god would have given us roots}$  

After removing spaces, the string is $54$ characters long.  $\sqrt{54}$ is between $7$ and $8$, so it is written in the form of a grid with 7 rows and 8 columns. 

    ifmanwas  
    meanttos          
    tayonthe  
    groundgo  
    dwouldha  
    vegivenu  
    sroots

+ Ensure that $rows \times columns \ge L$   
+ If multiple grids satisfy the above conditions, choose the one with the minimum area, i.e. $rows \times columns$.  

The encoded message is obtained by displaying the characters of each column, with a space between column texts. The encoded message for the grid above is:  
    
`imtgdvs fearwer mayoogo anouuio ntnnlvt wttddes aohghn sseoau`  
    
Create a function to encode a message.

**Function Description**  

Complete the *encryption* function in the editor below.  

encryption has the following parameter(s):  

- *string s:* a string to encrypt  

**Returns**  

- *string:* the encrypted string  

**Input Format**

One line of text, the string $s$

**Constraints**

$1 \le \text{ length of }s \le 81$   
$s$ contains characters in the range ascii[a-z] and space, ascii(32).

**Output Format**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-10T14:31:50.465Z  

```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int len=s.length();
    int rows = floor(sqrt(len));
    int cols = ceil(sqrt(len));
    if (rows * cols < len) {
        rows++;
    }
    vector<vector<char>> a(rows, vector<char>(cols, ' '));
    
    // Step 1: Fill the grid row by row with our string characters
    int char_index = 0;
    for(int i = 0; i < rows; i++)
    {
        // FIXED 3: Column loop tracks up to 'cols' boundary limit
        for(int j = 0; j < cols; j++)
        {
            if(char_index < len) {
                a[i][j] = s[char_index];
                char_index++;
            }
        }
    }
    
    // Step 2: Read the grid column by column to print the encrypted output
    for(int j = 0; j < cols; j++)
    {
        for(int i = 0; i < rows; i++)
        {
            // Only print actual characters, ignoring empty padded grid spaces
            if(a[i][j] != ' ') {
                cout << a[i][j];
            }
        }
        // Print a space separating the encrypted words after completing each column
        if(j < cols - 1) {
            cout << " ";
        }
    }
    
    cout << endl;
    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/encryption/problem)