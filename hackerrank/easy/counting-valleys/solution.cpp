#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    int p;
    cin>>n;
    cin>>p;
    int count=p/2;
    int count1=(n/2)-(p/2);
    if(count1<count)
    {
        cout<<count1;
    }
    else 
    {
        cout<<count;
    }
    return 0;
}
