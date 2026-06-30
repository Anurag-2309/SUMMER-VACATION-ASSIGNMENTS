// Q31. Write a program to Print character triangle.
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (char ch = 'A'; ch < 'A' + i; ch++)
            cout << ch;
        cout << endl;
    }

    return 0;
}
