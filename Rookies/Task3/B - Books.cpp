#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    long long k;
    cin >> n >> k;
    vector<long long> v(n);
    for (int i=0; i<n; i++) 
        cin >> v[i];

    int result=0, now=0;
    int r=0;
    for (int l=0; l<n; l++)
    {
        now += v[l];

        while (now > k)
            now -= v[r++];
        
        result = max(result, l-r+1);
    }
    cout << result << endl;
    return 0;
}
