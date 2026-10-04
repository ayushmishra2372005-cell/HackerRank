#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    // Fast I/O to help pass strict time limit thresholds
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a[26];
    for(int i = 0; i < 26; i++)
    {
        cin >> a[i];
    }
    
    string z;
    cin >> z;
    int len = z.length();
    
    int maxa = 0; 
    
    // Optimized Loop: Replaces your 26 if-else blocks with 1 mathematical operation
    for(int i = 0; i < len; i++)
    {
        // Directly maps 'a'->0, 'b'->1, ... 'z'->25 in O(1) constant time
        int index = z[i] - 'a'; 
        
        if(a[index] > maxa)
        {
            maxa = a[index];
        }
    }
    
    int print = len * maxa;
    cout << print << "\n";
    return 0;
}
