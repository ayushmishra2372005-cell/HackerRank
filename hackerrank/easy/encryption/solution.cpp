#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int len=s.length();
    int rows = floor(sqrt(len));
    int cols = ceil(sqrt(len));
    if (rows * cols < len) {
        rows++;
    }
    vector<vector<char>> a(rows, vector<char>(cols, ' '));
    
    // Step 1: Fill the grid row by row with our string characters
    int char_index = 0;
    for(int i = 0; i < rows; i++)
    {
        // FIXED 3: Column loop tracks up to 'cols' boundary limit
        for(int j = 0; j < cols; j++)
        {
            if(char_index < len) {
                a[i][j] = s[char_index];
                char_index++;
            }
        }
    }
    
    // Step 2: Read the grid column by column to print the encrypted output
    for(int j = 0; j < cols; j++)
    {
        for(int i = 0; i < rows; i++)
        {
            // Only print actual characters, ignoring empty padded grid spaces
            if(a[i][j] != ' ') {
                cout << a[i][j];
            }
        }
        // Print a space separating the encrypted words after completing each column
        if(j < cols - 1) {
            cout << " ";
        }
    }
    
    cout << endl;
    return 0;
}
