#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> result;
    result.push_back(1); // Start with 1
    
    for (int i = 2; i <= n; i++) {
        int carry = 0;
        // Multiply each digit in the array by the current number 'i'
        for (int j = 0; j < result.size(); j++) {
            int prod = result[j] * i + carry;
            result[j] = prod % 10; // Store the last digit
            carry = prod / 10;     // Carry the rest forward
        }
        // If there's a carry left over, expand the array
        while (carry > 0) {
            result.push_back(carry % 10);
            carry /= 10;
        }
    }
    
    // Print the digits in reverse order
    for (int i = result.size() - 1; i >= 0; i--) {
        cout << result[i];
    }
    cout << endl;
    return 0;
}
