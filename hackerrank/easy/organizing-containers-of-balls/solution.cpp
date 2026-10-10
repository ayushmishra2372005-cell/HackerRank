#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    for(int k = 0; k < q; k++)
    {
        int n;
        cin >> n;
        vector<vector<long long>> a(n, vector<long long>(n));
        vector<long long> row(n, 0); 
        vector<long long> col(n, 0);
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cin >> a[i][j];
                
                row[i] += a[i][j]; // Accumulate row sum (Container Capacity)
                col[j] += a[i][j]; // Accumulate column sum (Ball Type Quantity)
            }
        }
        
        // Step 2: Sort both tracking arrays so we can easily compare them 
        sort(row.begin(), row.end());
        sort(col.begin(), col.end());
        
        // Step 3: Check if both sorted arrays match element-for-element
        bool possible = true;
        for(int i = 0; i < n; i++)
        {
            if(row[i] != col[i])
            {
                possible = false;
                break;
            }
        }
        
        if(possible)
        {
            cout << "Possible" << endl;
        }
        else
        {
            cout << "Impossible" << endl;
        }
    }
    return 0;
}
