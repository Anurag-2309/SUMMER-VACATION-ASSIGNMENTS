#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int start, end;
    cin >> start >> end;
    for (int i = start; i <= end; i++) {
        int temp = i;
        int digits = 0;
        while (temp > 0) {
            digits++;
            temp /= 10;
        }
        temp = i;
        int sum = 0;
        while (temp > 0) {
            int remainder = temp % 10;
            sum += pow(remainder, digits);
            temp /= 10;
        }
        if (sum == i) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}