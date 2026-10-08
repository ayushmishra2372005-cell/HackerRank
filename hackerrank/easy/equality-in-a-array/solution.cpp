
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    
    // Create a frequency table initialized to 0 for numbers up to 100
    vector<int> frequency(101, 0);
    
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        frequency[a[i]]++; // Increment the counter for this specific value
    }
    
    // Find the single absolute highest frequency in our tracking table
    int max_freq = 0;
    for(int i = 1; i <= 100; i++)
    {
        if(frequency[i] > max_freq)
        {
            max_freq = frequency[i];
        }
    }
    
    // The minimum deletions needed is total items minus the max frequency
    int deletions = n - max_freq;
    
    cout << deletions << endl;
    return 0;
}
