#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    int left=0, right=n-1;
    int Alice=0, Bob=0, c1=0, c2=0;

    while (left <= right) 
    {
        if (Alice <= Bob) 
        {
            Alice += v[left];
            ++left;
            ++c1;
        } 
        else 
        {
            Bob += v[right];
            --right;
            ++c2;
        }
    }

    cout << c1 << " " << c2 << endl;
    return 0;
}