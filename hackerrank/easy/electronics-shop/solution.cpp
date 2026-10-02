#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,m,b;
    cin>>b>>n>>m;
    int a[n];
    int c[m];
    int d=0;
    int max=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>c[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i]+c[j]<=b)
            {
                d=(a[i])+(c[j]);
                if(max<d)
                {
                    max=d;
                }
            }
        }
    }
    if(max>0)
    {
        cout<<max;
    }
    else 
    {
        cout<<"-1";
    }
    return 0;
}
