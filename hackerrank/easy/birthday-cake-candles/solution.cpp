#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int a[n];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[n];
    }
    int count=1;
    int max=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            count=1;
        }
        else if(a[i]==max)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}
