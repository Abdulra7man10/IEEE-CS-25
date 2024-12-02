#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
#include <map>
#include <utility>
using namespace std;

int main()
{
    vector<string> lines = 
    {
        "qwertyuiop", 
        "asdfghjkl;",
        "zxcvbnm,./"
    };
    map<char,pair<char,char>> m;
    for (string line : lines) {
        for (int l=0; l<line.size(); l++) {
            pair<char,char> p;
            if (l != 0) p.first = line[l-1];
            if (l != line.size()-1) p.second = line[l+1];
            m[line[l]] = p;
        }
    }
    char dir;
    cin >> dir;
    string message;
    cin >> message;
    string newMessage = message;
    for (int i=0; i<message.size(); i++) {
        if (dir == 'R')
            newMessage[i] = m[message[i]].first;
        else
            newMessage[i] = m[message[i]].second;
    }

    cout << newMessage << endl;
    return 0;
}