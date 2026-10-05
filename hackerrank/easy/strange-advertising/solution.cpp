#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int like=0;
    int a=5;
    for(int i=0;i<n;i++)
    {
        int like1=a/2;
        like=like+like1;
        a=like1*3;   
    }
    cout<<like;
}
