#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int crimes;
    cin >> crimes;
    int officers = 0, untreated = 0;
    for (int i=1; i<=crimes; i++) {
        int num;
        cin >> num;
        if (num < 0) {
            if (officers) officers--;
            else untreated++;
        }
        else
            officers += num;
    }
    cout << untreated << endl;
    return 0;
}