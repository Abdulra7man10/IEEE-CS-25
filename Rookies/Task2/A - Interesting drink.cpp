#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> v(n);
    for (int i=0; i<n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    
    int q; cin >> q;
    while (q--) 
    {
        long long num; cin >> num;
        int l=0, r=n-1, result=0;
        while (l <= r)
        {
            int mid = (l+r) / 2;
            if (v[mid] <= num) {
                result = mid+1;
                l = mid+1;
            }
            else
                r = mid-1;
        }
        cout << result << endl;
    }
    return 0;
}

