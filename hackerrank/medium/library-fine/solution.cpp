#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        int a, b;
        cin >> a >> b;
        int count = 0;
        
        // Fixed: Start 'j' at the square root of 'a' and stop at the square root of 'b'
        // This avoids calculating unnecessary squares and runs instantly!
        int start = sqrt(a);
        int end = sqrt(b);
        
        for(int j = start; j <= end; j++)
        {
            int n = j * j;
            if(n >= a && n <= b)
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
