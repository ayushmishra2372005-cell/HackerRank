#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s); // Reads the whole sentence with spaces

    // Array to track if each letter a-z is present
    vector<bool> present(26, false);

    for (int i = 0; i < s.length(); i++)
    {
        char ch = tolower(s[i]);
        if (ch >= 'a' && ch <= 'z')
        {
            present[ch - 'a'] = true;
        }
    }

    // Count how many unique letters were found
    int c = 0;
    for (int i = 0; i < 26; i++)
    {
        if (present[i])
        {
            c++;
        }
    }

    if (c == 26)
    {
        cout << "pangram";
    }
    else
    {
        cout << "not pangram";
    }

    return 0;
}
