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
    int count1=0;
    int count2=0;
    int count3=0;
    int count4=0;
    int count5=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            count1++;
        }
        else if(a[i]==2)
        {
            count2++;
        }
        else if(a[i]==3)
        {
            count3++;
        }
        else if(a[i]==4)
        {
            count4++;
        }
        else
        {
            count5++;
        }
    }
    if(count1>=count2&&count1>=count3&&count1>=count4&&count1>=count5)
    {
        cout<<"1";
    }
    if(count1<count2&&count2>=count3&&count2>=count4&&count2>=count5)
    {
        cout<<"2";
    }
    if(count3>count2&&count1<count3&&count3>=count4&&count3>=count5)
    {
        cout<<"3";
    }
    if(count4>count2&&count4>count3&&count1<count4&&count4>=count5)
    {
        cout<<"4";
    }
    if(count5>count1&&count5>count2&&count5>count3&&count5>count4)
    {
        cout<<"5";
    }
    return 0;
}
