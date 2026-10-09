#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Fast I/O to handle heavy test files
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--)
    {
        long long b, w, bc, wc, z;
        cin >> b >> w >> bc >> wc >> z;
        
        // Find the absolute cheapest way to buy ONE black gift
        // It's either the normal price (bc) OR buying white and converting (wc + z)
        long long actual_bc = min(bc, wc + z);
        
        // Find the absolute cheapest way to buy ONE white gift
        // It's either the normal price (wc) OR buying black and converting (bc + z)
        long long actual_wc = min(wc, bc + z);
        
        // Total cost calculation
        long long total_cost = (b * actual_bc) + (w * actual_wc);
        
        cout << total_cost << "\n";
    }
    return 0;
}
