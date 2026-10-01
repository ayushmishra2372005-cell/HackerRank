#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    int b[m];
    int count=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    for(int x=1;x<=100;x++)
    {
        bool fits_condition_1 = true;
        bool fits_condition_2 = true;
        for(int i = 0; i < n; i++)
        {
            if(x % a[i] != 0)
            {
                fits_condition_1 = false;
                break;
            }
        }
        for(int i = 0; i < m; i++)
        {
            if(b[i]%x != 0)
            {
                fits_condition_2 = false;
                break;
            }
        }
        if(fits_condition_1 && fits_condition_2)
        {
            count++;
        }
    }
    
    cout << count << endl;
    return 0;
}
