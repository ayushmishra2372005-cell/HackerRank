#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        int count = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x > 0) {
                count++;
            }
        }
        
        if (count < k) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
