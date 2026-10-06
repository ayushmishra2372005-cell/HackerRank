#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    
    vector<int> a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    int e = 100;
    int curr = 0; // Tracks our current cloud position, starting at 0
    
    do {
        // 1. Jump forward by k steps circularly
        curr = (curr + k) % n;
        
        // 2. Pay 1 energy unit for the jump
        e = e - 1;
        
        // 3. Pay 2 extra energy units if it's a thunderhead cloud
        if (a[curr] == 1)
        {
            e = e - 2;
        }
        
    } while (curr != 0); // Keep jumping until we return to the start (cloud 0)
    
    cout << e << endl;
    return 0;
}
