#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string t;
    cin >> t;
    int a;
    cin >> a;
    
    int b = s.length();
    int c = t.length();
    int count = 0;
    
    for(int i = 0; i < b; i++)
    {
        // Fixed: If we exceed the boundary of string 't', it's a guaranteed mismatch
        if(i >= c)
        {
            count = (b - i) + (c - i);
            break;
        }
        
        if(s[i] == t[i])
        {
            continue;
        }
        else if(s[i] != t[i])
        {
            // Fixed: Everything from index 'i' to the end must be deleted from 's' 
            // and everything from 'i' to the end of 't' must be appended.
            count = (b - i) + (c - i);
            break; // Stop looking further down the string
        }   
    }
    
    // Fixed: If the loop finishes with no mismatches but 't' is longer than 's'
    if (count == 0 && c > b) 
    {
        count = c - b;
    }

    // Keeping your exact condition block with added parity checks required by the problem
    if(a >= b + c)
    {
        cout << "Yes";
    }
    else if(count <= a && (a - count) % 2 == 0)
    {
        cout << "Yes";
    }
    else 
    {
        cout << "No";
    }
    return 0;
}
