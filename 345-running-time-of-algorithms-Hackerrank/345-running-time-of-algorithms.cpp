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

    int count = 0;

    // Insertion sort starting from index 1
    for (int i = 1; i < n; i++)
    {
        // Shift backwards, swapping adjacent inverted pairs
        for (int j = i; j > 0; j--)
        {
            if (a[j] < a[j - 1])
            {
                int temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
                count++; // Increment count on each shift/swap
            }
            else
            {
                break; // Element is in its correct place for this pass
            }
        }
    }

    cout << count << endl;
    return 0;
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna