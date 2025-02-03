
#include <iostream>
using namespace std;

int main() {
    int num, max = 0, digit;

    cout << "Enter a number: ";
    cin >> num;

    do {
        digit = num % 10;
        if (digit > max)
            max = digit;
        num /= 10;
    } while (num != 0);

    cout << "Largest digit: " << max;

    return 0;
}
