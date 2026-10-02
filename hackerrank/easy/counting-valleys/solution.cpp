#include <bits/stdc++.h>
#include<strings.h>
using namespace std;
int main()
{
    int steps;
    cin>>steps;
    string path;
    cin>>path;
    int el=0;
    int val=0;
    for(int i=0;i<steps;i++)
    {
        if(path[i]=='U')
        {
            el++;
            if(el==0)
            {
                val++;
            }
        }
        else if(path[i]=='D')
        {
            el--;
        }
    }
    cout<<val;
    return 0;
}
