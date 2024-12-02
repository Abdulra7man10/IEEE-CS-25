#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i=0; i<n; i++)
        cin >> v[i];

    int smallest_index = 0, biggest_index = 0;
    for (int i=1; i<n; i++) {
        if (v[smallest_index] >= v[i])
            smallest_index = i;
        if (v[biggest_index] < v[i])
            biggest_index = i;
    }
    int result = biggest_index + n-smallest_index-1;
    if (biggest_index > smallest_index)
        result--;
    cout << result << endl;
    return 0;
}