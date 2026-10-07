#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    int p = 0;
    
    if (c > f) 
    {
        // Fixed: Book returned in a later calendar year
        p = 10000; 
    }
    else if (c == f)
    {
        if (b > e)
        {
            // Fixed: Same year, but returned in a later month
            int temp = b - e;
            p = temp * 500; // Fixed: Removed 'int' so it updates the outer 'p'
        }
        else if (b == e)
        {
            if (a > d)
            {
                // Fixed: Same year, same month, but returned on a later day
                int temp = a - d;
                p = temp * 15; // Fixed: Removed 'int' so it updates the outer 'p'
            }
        }
    }
    
    cout << p << endl;
    return 0;
}
