#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long get_index(vector<long long>& v, long long t)
{
    long long l = 0, r = v.size() - 1;
    while (l < r)
    {
        long long mid = (l + r + 1) / 2;
        if (v[mid] <= t)
            l = mid;
        else
            r = mid - 1;
    }
    return l;
}

int main()
{
    int t=1;
    cin >> t;
    while (t--)
    {
        long long f, points, q;
        cin >> f >> points >> q;

        vector<long long> vP(points+1,0);
        for (long long i=1; i<=points; i++)
            cin >> vP[i];

        vector<long double> vT(points+1,0);
        long long last = 0;
        for (long long i=1; i<=points; i++)
        {
            long long p; 
            cin >> p;
            vT[i] = (long double) (vP[i]-vP[i-1]) / (p-vP[i-1]);
        }
        
        while (q--)
        {
            long long d;
            cin >> d;
            long long result = 0;
            for (long long i=1; d>0; i++)
            {
                result += (int) min(d,vP[i])/vT[i];
                d -= vP[i];
            }
            cout << result << " ";
        }
        cout << endl;
    }
    return 0;
}
