#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int j = 0; j < n; j++)
    {
        int sticks_present = 0;
        int low = 1000000; 
        
        for(int i = 0; i < n; i++)
        {
            if(a[i] > 0)
            {
                sticks_present++;
                if(a[i] < low)
                {
                    low = a[i];
                }
            }
        }
        if(sticks_present == 0)
        {
            break;
        }
        cout << sticks_present << endl;
        for(int i = 0; i < n; i++)
        {
            if(a[i] > 0)
            {
                a[i] = a[i] - low;
            }
        }
    }
    return 0;
}
