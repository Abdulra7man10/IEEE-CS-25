#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
    long long books, free;
    cin >> books >> free;

    vector<int> v(books+1,0);
    for (int i=1; i<=books; i++)
        cin >> v[i];
    
    for (int i=1; i<=books; i++) 
        v[i] += v[i-1];

    long long result = 0;
    for (int i=1; i<=books; i++)
    {
        long long l=i, r=books, local=0;
        while (l <= r)
        {
            long long mid = l + (r-l)/2;
            if (v[mid]-v[i-1] <= free)
            {
                local = mid-i+1;
                l = mid+1;
            }
            else
                r = mid-1;
        }
        result = max(result, local);
    }
    cout << result << endl;
    return 0;
}
