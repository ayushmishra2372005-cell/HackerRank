#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a;
    cin>>a;
    int b[n];
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(b[i]>max)
        {
            max=b[i];
        }
    }
    int dose=max-a;
    if(dose>0)
    {
        cout<<dose;
    }
    else if(dose<0)
    {
        cout<<"0";
    }
    return 0;
}
