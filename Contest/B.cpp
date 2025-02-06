#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t=1;
    cin >> t;
    while (t--)
    {
        int m;
        cin >> m;
        vector<bool> v1(m+1,0), v2(m+1,0);
        bool result = true;
        for (int i=0; i<m; i++) {
            int n1, n2;
            cin >> n1 >> n2;
            bool done = false;
            if (!v1[n1] && !v1[n2]) {
                v1[n1] = v1[n2] = true;
                done = true;
            }
            else if (!v2[n1] && !v2[n2]) {
                v2[n1] = v2[n2] = true;
                done = true;
            }
            if (n1 == n2 || !done)
                result = false;
            //cout << result << endl;
        }
        cout << (result? "YES" : "NO") << endl;
    }
    return 0;
}
