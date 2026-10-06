#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i=1;i<=n;i++)
    {
        int pos1=0;
        for(int k=0;k<n;k++)
        {
            if(a[k]==i)
            {
                pos1=k+1;
                break;
            }
        }
           for(int j=0;j<n;j++)
           {
            if(a[j]==pos1)
            {
                int print=j+1;
                cout<<print<<endl;
                break;
            }
           }
    }
    return 0;
}
