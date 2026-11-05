#include <bits/stdc++.h>
using namespace std;

int main()
{
    int w;
    cin >> w;
    for (int k = 0; k < w; k++)
    {
        string s;
        cin >> s;

        int n = s.length();
        bool isFunny = true;

        // Compare adjacent differences from the front and back simultaneously
        for (int i = 1; i < n; i++)
        {
            int diff_forward = abs(s[i] - s[i - 1]);
            int diff_reverse = abs(s[n - 1 - i] - s[n - i]);

            if (diff_forward != diff_reverse)
            {
                isFunny = false;
                break;
            }
        }

        if (isFunny)
        {
            cout << "Funny" << endl;
        }
        else
        {
            cout << "Not Funny" << endl;
        }
    }
    return 0;
}
