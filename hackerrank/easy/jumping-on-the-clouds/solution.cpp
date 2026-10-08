#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    
    // FIXED: Changed from 'int' to 'long long' to prevent 1-trillion limit overflow
    long long n; 
    cin >> n;
    
    long long len = s.length();
    
    // Step 1: Count occurrences of 'a' in the single original string
    long long base_count = 0;
    for(int i = 0; i < len; i++)
    {
        if(s[i] == 'a')
        {
            base_count++;
        }
    }
    
    // Step 2: Calculate how many times the full string fits into 'n'
    long long full_repeats = n / len;
    long long total_count = full_repeats * base_count;
    
    // Step 3: Handle the remaining leftover portion of the string
    long long leftovers = n % len;
    for(int i = 0; i < leftovers; i++)
    {
        if(s[i] == 'a')
        {
            total_count++;
        }
    }
    
    cout << total_count << "\n";
    return 0;
}
