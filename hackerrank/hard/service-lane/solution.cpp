#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<t;i++)
    {
        int c,b;
        cin>>c>>b;
        int min=999;
        for(int j=c;j<=b;j++)
        {
            if(min>a[j])
            {
                min=a[j];
            }
        }
        cout<<min<<endl;
    }
    return 0;
}
