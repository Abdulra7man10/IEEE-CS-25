#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Balanced() {
    int n; 
    cin >> n;
    vector<int> v(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    
    sort(v.begin(), v.end());
    
    int maxTeamSize = 0;
    int l = 0;
    
    for (int r = 0; r < n; ++r) 
    {
        while (v[r] - v[l] > 5)
            ++l;
        maxTeamSize = max(maxTeamSize, r - l + 1);
    }
    
    cout << maxTeamSize << endl;
}

int main() {
    Balanced();
    return 0;
}