#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<string> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int max=0;
    int team=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int c=0;
            for(int k=0;k<m;k++)
            {
                if(a[i][k]=='1'||a[j][k]=='1')
                {
                    c++;
                }
            }
            if(c>max)
            {
                max=c;
                team=1;
            }
            else if(c==max&&max>0)
            {
                team++;
            }
        }
    }
    cout<<max<<endl;
    cout<<team<<endl;
    return 0;
}
