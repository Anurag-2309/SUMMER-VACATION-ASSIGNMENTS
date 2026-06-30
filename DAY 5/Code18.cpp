// Q18. Write a program to Check strong number.
#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int n, temp, digit, sum = 0;
    cin >> n;
    temp = n;

    while (temp > 0) {
        digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    if (sum == n)
        cout << "Strong Number";
    else
        cout << "Not Strong Number";

    return 0;
}
