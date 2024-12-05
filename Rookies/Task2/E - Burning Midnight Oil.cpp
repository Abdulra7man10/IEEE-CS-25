#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

long long IsValid(long long& num, int& k)
{
    long long result = 0;
    int i=0;
    double p;
    do
    {
        p = pow(k,i++);
        result += num/p;
    } while (p < num);
    return result;
}

int main() 
{
    long long lines;
    int k;
    cin >> lines >> k;

    long long l=1, r=lines, result=lines;
    while (l <= r)
    {
        long long mid = l + (r-l)/2;
        if (IsValid(mid, k) >= lines)
        {
            result = mid;
            r = mid-1;
        }
        else
            l = mid+1;
    }

    cout << result << endl;
    return 0;
}
