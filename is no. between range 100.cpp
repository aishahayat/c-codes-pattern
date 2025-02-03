
#include <iostream>
using namespace std;
int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num >= 1 || num <= 100)
        cout << "In Range";
    else
        cout << "Out of range";

    return 0;
}
