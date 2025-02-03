
#include <iostream>
using namespace std;
int main() {
    double num1, num2, num3;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter third number: ";
    cin >> num3;

    if (num1 <= num2 && num1 <= num3)
        cout << "Smallest number: " << num1;
    else if (num2 <= num1 && num2 <= num3)
        cout << "Smallest number: " << num2;
    else
        cout << "Smallest number: " << num3;

    return 0;
}
