#include <iostream>
using namespace std;

bool isArmstrong(int n)
{
    int original = n, sum = 0;

    while (n > 0)
    {
        int digit = n % 10;
        sum += digit * digit * digit;
        n /= 10;
    }

    return original == sum;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isArmstrong(n))
        cout << "Armstrong Number";
    else
        cout << "Not an Armstrong Number";

    return 0;
}