#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, l, r;
        cin >> n >> l >> r;
        vector<int> v(n);
        for (int i=0; i<n; i++)
            cin >> v[i];
        sort(v.begin(), v.end());

        long long result = 0;
        for (int i=0; i<n-1; ++i) 
        {
            int low  = lower_bound(v.begin()+i+1, v.end(), l-v[i]) - v.begin();
            int high = upper_bound(v.begin()+i+1, v.end(), r-v[i]) - v.begin()-1;

            if (low <= high) {
                result += (high-low+1);
        }
    }
        
        cout << result << endl;
    }
    return 0;
}