#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    vector<int >d(a);
    for(int i=0;i<a;i++)
    {
        cin>>d[i];
    }
    vector<int>e(c);
    for(int i=0;i<c;i++)
    {
        cin>>e[i];
    }
    b=b%a;
    for(int i=0;i<a/2;i++)
    {
        int temp=d[i];
        d[i]=d[a-1-i];
        d[a-1-i]=temp;
    }
    for(int i=0;i<b/2;i++)
    {
        int temp=d[i];
        d[i]=d[b-1-i];
        d[b-1-i]=temp;
    }
    int remaining = a - b;
    for(int i = 0; i < remaining / 2; i++)
    {
        int temp = d[b + i];
        d[b + i] = d[a - 1 - i];
        d[a - 1 - i] = temp;
    }
    for(int i=0;i<c;i++)
    {
        cout<<d[e[i]]<<endl;
    }
    return 0;
}
