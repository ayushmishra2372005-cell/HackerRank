#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int count=0;
    for(int i=0;i<n-1;)
    {
        if(i+2<n&&a[i+2]==0)
        {
            count++;
            i+=2;
        }
        else 
        {
            count++;
            i+=1;
        }
    }
    cout<<count;
    return 0;
}
