#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>

using namespace std;

int main() 
{
    int n, m;
    cin >> n >> m;
    vector<long long> a(n), b(m);
    for (int i=0; i<n; i++)
        cin >> a[i];
    for (int i=0; i<m; i++)
        cin >> b[i];

    long long result = 0;
    for (int i=0; i<n; i++)
    {
        long long l=0, r=m-1, local=LLONG_MAX;
        while (l <= r)
        {
            long long mid = l + (r-l)/2;
            local = min(local, abs(a[i]-b[mid]));
            if (a[i] >= b[mid])
                l = mid+1;
            else
                r = mid-1;
        }
        result = max(result, local);
    }
    cout << result << endl;
    return 0;
}
