#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    double pos=0;
    double neg=0;
    double z=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            neg++;
        }
        else if(arr[i]>0)
        {
            pos++;   
        }
        else
        {
            z++;
        }
    }
    double a=neg/n;
    double b=pos/n;
    double c=z/n;
    cout<<fixed<<setprecision(6)<<b<<endl;
    cout<<fixed<<setprecision(6)<<a<<endl;
    cout<<fixed<<setprecision(6)<<c<<endl;
    return 0;
}

