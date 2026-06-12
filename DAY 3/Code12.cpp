#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int num1 = a;
    int num2 = b;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    int gcd = a;
    int lcm = (num1 * num2) / gcd;
    cout << lcm << endl;
    return 0;
}