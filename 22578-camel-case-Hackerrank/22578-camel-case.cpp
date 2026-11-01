#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int count=1;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>=65&&s[i]<=90)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna