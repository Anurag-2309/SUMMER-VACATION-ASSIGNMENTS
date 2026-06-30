// Q20. Write a program to Find largest prime factor.
#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n, largest = -1;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0 && isPrime(i))
            largest = i;
    }

    cout << largest;
    return 0;
}
