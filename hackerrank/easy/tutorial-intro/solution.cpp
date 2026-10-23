#include <bits/stdc++.h>
using namespace std;
int main()
{
    int v;
    int n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int b;
    for(int i=0;i<n;i++)
    {
        if(a[i]==v)
        {
            b=i;
        }
    }
    cout<<b+1;
    return 0;
}
