#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int charge;
    cin>>charge;
    int cost=0;
    for(int i=0;i<n;i++)
    {
        if(i==m)
        {
            cost=cost;
        }
        else 
        {
            cost=cost+a[i];
        }
    }
    int actual=cost/2;
    if(actual==charge)
    {
        cout<<"Bon Appetit";
    }
    else 
    {
        cout<<charge-actual;
    }
}
