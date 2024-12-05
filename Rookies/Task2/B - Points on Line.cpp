#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
    long long n, d;
    cin >> n >> d;
    
    vector<long long> v(n);
    for (long long i=0; i<n; i++)
        cin >> v[i];

    long long count = 0;

    for (long long i=0; i<n-2; i++) 
    {
        long long l=i+1, r=n-1, result=i;
        while (l <= r) 
        {
            long long mid = l + (r-l) / 2;
            if (v[mid] - v[i] <= d) 
            {
                result = mid;  
                l = mid + 1;
            } 
            else
                r = mid - 1;
        }

        long long total = result-i + 1;
        if (total >= 3) {
            count += (total-1) * (total-2) / 2;
        }
    }

    cout << count << endl;
    return 0;
}
