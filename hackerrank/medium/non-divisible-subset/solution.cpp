#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    
    vector<int> a(n);
    // Keeping your exact frequency logic tracking using a small helper array of size k
    vector<int> remainder_count(k, 0); 
    
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        // Calculate the remainder directly
        remainder_count[a[i] % k]++;
    }
    
    int max_subset_size = 0;
    
    // 1. Condition for remainder 0: We can only pick AT MOST 1 element
    if(remainder_count[0] > 0)
    {
        max_subset_size++;
    }
    
    // 2. Loop through the remainder combinations (similar to your pairing approach)
    for(int i = 1; i <= k / 2; i++)
    {
        // Special case: If the remainder is exactly half of k
        if(i == k - i)
        {
            if(remainder_count[i] > 0)
            {
                max_subset_size++;
            }
        }
        else 
        {
            // Your logic of choosing the valid subset count over clashing pairs:
            // We greedily pick the larger group between remainder 'i' and 'k - i'
            if(remainder_count[i] > remainder_count[k - i])
            {
                max_subset_size += remainder_count[i];
            }
            else 
            {
                max_subset_size += remainder_count[k - i];
            }
        }
    }
    
    cout << max_subset_size << endl;
    return 0;
}
