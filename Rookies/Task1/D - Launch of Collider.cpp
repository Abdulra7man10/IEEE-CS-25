#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
#include <map>
#include <utility>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string moves;
    cin >> moves;
    long long prev, cur;
    cin >> cur;
    long long result = LONG_LONG_MAX;

    for (int i=1; i<n; i++) {
        prev = cur;
        cin >> cur;
        if (cur >= prev){
            if (moves[i-1]=='R' && moves[i]=='L')
                result = min(result, (long long)ceil((cur-prev)/2));
        }
        else {
            if (moves[i-1]=='L' && moves[i]=='R')
                result = min(result, (long long)ceil((prev-cur)/2));
        }
    }
    if (LONG_LONG_MAX == result)
        result = -1;
    cout << result << endl;
    return 0;
}