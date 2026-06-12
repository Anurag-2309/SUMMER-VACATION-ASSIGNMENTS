#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 1) {
        cout << 0 << endl;
        return 0;
    }
    if (n == 2) {
        cout << 1 << endl;
        return 0;
    }
    int t1 = 0, t2 = 1, nextTerm = 0;
    for (int i = 3; i <= n; i++) {
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    cout << t2 << endl;
    return 0;
}