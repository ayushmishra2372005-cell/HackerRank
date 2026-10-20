#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    string t;
    cin>>s>>t;
    cout<<s.length()<<" "<<t.length()<<endl;
    cout<<s<<t<<endl;
    for(int i=0;i<s.length();i++)
    {
        if(i==0)
        {
            cout<<t[i];
        }
        else 
        {
            cout<<s[i];
        }
    }
    for(int i=0;i<t.length();i++)
    {
        if(i==0)
        {
            cout<<" "<<s[i];
        }
        else 
        {
            cout<<t[i];
        }
    }
}
