#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        int count=1;
        for(int j=1;j<=a[i];j++)
        {
            if(j%2==0)
            {
                count=count+1;
            }
            else if(j%2!=0)
            {
                count=count*2;
            }
        }
        
        cout<<count<<endl;
    }
    return 0;
}
