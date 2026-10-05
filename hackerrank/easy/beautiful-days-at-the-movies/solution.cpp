#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    
    for (int i = 0; i < a; i++) {
        int n;
        cin >> n;
        int k;
        cin >> k;
        
        int count = 0;
        for (int j = 0; j < n; j++) { // Fixed: Changed inner variable 'i' to 'j'
            int val;
            cin >> val;
            if (val <= 0) {          // Fixed: On-time/early students are <= 0
                count++;
            }
        }
        if (count < k) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

