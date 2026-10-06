#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int o;
        cin>>o;
        int count=0;
        for(int j=o;j>0;j/=10)
        {
            int d=j%10;
            if(d==0||o%d!=0)
            {
                continue;
            }
            else 
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
