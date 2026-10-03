#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int a[x][3];
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<x;i++)
    {
        int dis=abs(a[i][0]-a[i][2]);
        int dis1=abs(a[i][1]-a[i][2]);
        if(dis<dis1)
        {
            cout<<"Cat A"<<endl;
        }
        else if(dis1<dis)
        {
            cout<<"Cat B"<<endl;
        }
        else 
        {
            cout<<"Mouse C"<<endl;
        }
    }
    return 0;
}
