#include <bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int hour=stoi(s.substr(0,2));
    string a=s.substr(8,2);
    if(a=="AM"&&hour==12)
    {
        s[0]='0';s[1]='0';
    }
    else if(a=="PM"&&hour!=12)
    {
        hour=hour+12;
        string n=to_string(hour);
        s[0]=n[0];
        s[1]=n[1];   
    }
    cout<<s.substr(0,8)<<endl;
    return 0;
}
