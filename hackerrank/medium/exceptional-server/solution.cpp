#include <iostream>
#include <string>
#include <exception>

using namespace std;

// ==========================================
// PASTE THIS CLASS INTO YOUR OPEN EDIT ZONE
// ==========================================
class BadLengthException : public exception {
private:
    string length_str; // Keeps the string alive in memory

public:
    BadLengthException(int n) {
        length_str = to_string(n); // Convert int to string (e.g. 2 -> "2")
    }

    // Overriding the default exception text pointer returned to the system
    const char* what() const noexcept override {
        return length_str.c_str(); 
    }
};

// ========================================================
// THE LOCKED SYSTEM CODE (Ensure this matches your editor)
// ========================================================
bool checkUsername(string username) {
    bool isValid = true;
    int n = username.length();
    if(n < 5) {
        throw BadLengthException(n);
    }
    for(int i = 0; i < n - 1; i++) {
        if(username[i] == 'w' && username[i+1] == 'w') {
            isValid = false;
        }
    }
    return isValid;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        string username;
        cin >> username;
        try {
            bool isValid = checkUsername(username);
            if(isValid) {
                cout << "Valid" << endl;
            } else {
                cout << "Invalid" << endl;
            }
        } catch (BadLengthException e) {
            cout << "Too short: " << e.what() << endl;
        }
    }
    return 0;
}
