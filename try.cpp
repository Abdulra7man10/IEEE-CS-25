#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

/* 
    S9 - String Session

- What is String?
    E problem

- diff between char[] & string?
    string x = "hello world";
    char x2[] = "hello world";
    char x3[] = {'h','e','l','l','o',' ', 'w','o','r','l','d'}; 

- Functions of String & Algorithm Library
    pop_pack, push_pack, front, back, find, insert, empty, clear, +=, substr, etc...
    sort & reverse

*/

int main()
{
    char x[] = "hello";
    sort(x, x+5);
    cout << x << endl;
    return 0;
}