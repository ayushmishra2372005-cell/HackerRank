#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int d,m;
    cin>>d>>m;
    int count=0;
    for(int i=0;i<n;i++)
    {
        int c=0;
        for(int j=0;j<m;j++)
        {
            c=c+a[i+j];
        }
        if(c==d)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}
