#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++)
    {
        if(a[i] < 38)
        {
            a[i] = a[i];
        }
        else 
        {
            int next_multiple = ((a[i] / 5) + 1) * 5;
            if(next_multiple - a[i] < 3)
            {
                a[i] = next_multiple;
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}
