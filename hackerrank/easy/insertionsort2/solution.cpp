#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // Outer loop runs from 1 to n - 1 (n - 1 print passes required)
    for (int i = 1; i < n; i++)
    {
        // Walk backwards from i to insert a[i] into the sorted prefix
        for (int j = i; j > 0; j--)
        {
            if (a[j] < a[j - 1])
            {
                int temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
            else
            {
                break; // Stop shifting once it is in the correct position
            }
        }

        // Print the array after each insertion
        for (int m = 0; m < n; m++)
        {
            cout << a[m] << " ";
        }
        cout << endl;
    }

    return 0;
}
