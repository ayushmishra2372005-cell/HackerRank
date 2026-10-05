#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int count = 0;
    
    for (int i = a; i <= b; i++)
    {
        // Use a temporary variable so we don't accidentally modify 'i'
        int temp = i; 
        int reverse = 0;
        
        // This loop extracts ALL digits of the current number 'temp'
        while (temp > 0) 
        {
            reverse = (reverse * 10) + (temp % 10);
            temp /= 10;
        }
        
        // Fixed: Check the difference between the current day 'i' and its 'reverse'
        int d = abs(i - reverse);
        if (d % c == 0)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
