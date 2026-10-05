#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,m,s;
        cin>>n>>m>>s;
        int a[n];
            int target=(s+m-1)%n;
        if(target==0)
        {
            target=n;
        }
        cout<<target<<endl;
    }
    return 0;
}
