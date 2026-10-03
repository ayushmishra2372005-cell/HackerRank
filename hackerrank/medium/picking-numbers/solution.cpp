#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    int max_len = 0;
    
    // Outer loop selects the baseline element
    for(int i = 0; i < n; i++)
    {
        int current_element_count = 0;
        int neighbor_element_count = 0;
        
        // Inner loop checks the entire array against the selected element
        for(int j = 0; j < n; j++)
        {
            // 1. Count how many times the exact element a[i] appears
            if(a[j] == a[i])
            {
                current_element_count++;
            }
            // 2. Count how many times the exact neighbor (a[i] + 1) appears
            else if(a[j] == a[i] + 1)
            {
                neighbor_element_count++;
            }
        }
        
        // Combined valid subarray length for this specific pair
        int total_valid_length = current_element_count + neighbor_element_count;
        
        // Update the global maximum length found so far
        if(total_valid_length > max_len)
        {
            max_len = total_valid_length;
        }
    }
    
    cout << max_len;
    return 0;
}
