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
    
    int b;
    cin >> b;
    int c[b];
    for(int i = 0; i < b; i++)
    {
        cin >> c[i];
    }
    
    int pos = 0;
    int unique[n];
    unique[pos++] = a[0];
    
    // FIXED: Start loop from i = 1 and check dynamic index positions (i vs i-1)
    for(int i = 1; i < n; i++)
    {
        if(a[i] != a[i - 1])
        {
            unique[pos++] = a[i];
        }
    }
    
    int j = pos - 1;
    for(int i = 0; i < b; i++)
    {
        while(j >= 0 && c[i] >= unique[j])
        {
            j--;
        }
        cout << (j + 1) + 1 << endl;
    }
    
    return 0;
}
