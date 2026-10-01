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
    int high=a[0];
    int low=a[0];
    int high_count=0;
    int low_count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>high)
        {
            high=a[i];
            high_count++;
        }
        else if(a[i]<low)
        {
            low=a[i];
            low_count++;
        }
    }
    cout<<high_count<<" "<<low_count;
    return 0;
}
