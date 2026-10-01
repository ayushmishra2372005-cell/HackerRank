#include <bits/stdc++.h>

using namespace std;
int main()
{
    int s,t;
    cin>>s>>t;
    int a,b;
    cin>>a>>b;
    int m,n;
    cin>>m>>n;
    int ap[m];
    int og[n];
    int apple=0;
    int orange=0;
    for(int i=0;i<m;i++)
    {
        cin>>ap[i];
        int land=a+ap[i];
        if(s<=land&&land<=t)
        {
            apple++;
        }
    }
    for(int i=0;i<n;i++)
    {
        cin>>og[i];
        int land=b+og[i];
        if(s<=land&&land<=t)
        {
            orange++;
        }
    }
    cout<<apple<<endl;
    cout<<orange;
    return 0;
}

