#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int temp = n;
    int digits = 0;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    temp = n;
    int sum = 0;
    while (temp > 0) {
        int remainder = temp % 10;
        sum += pow(remainder, digits);
        temp /= 10;
    }
    if (sum == n) {
        cout << "Armstrong" << endl;
    } else {
        cout << "Not Armstrong" << endl;
    }
    return 0;
}