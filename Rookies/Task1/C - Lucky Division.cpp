#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int num;
    cin >> num;
    bool result = false;
    vector<int> luckyNumbers = {4, 7, 44, 47, 77, 444, 447, 474, 477, 744, 774, 777};

    for (int lucky : luckyNumbers)
        if (num % lucky == 0) {
            result = true;
            break;
        }

    cout << (result? "YES" : "NO") << endl;
    return 0;
}