#include <bits/stdc++.h>
using namespace std;
int main()
{
    int v;
    int n;
    cin>>v;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int b=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==v)
        {
            b=i;
            break;
        }
    }
    cout<<b;
    return 0;
}
