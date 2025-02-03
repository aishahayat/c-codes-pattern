
#include <iostream>
using namespace std;
double calculateSimpleInterest(double principal, double rate, double time) {
    return principal * rate * time / 100;
}

int main() {
    double principal, rate, time;

    cout << "Enter principal amount: ";
    cin >> principal;

    cout << "Enter interest rate (%): ";
    cin >> rate;

    cout << "Enter time (years): ";
    cin >> time;

    double interest = calculateSimpleInterest(principal, rate, time);
    double totalAmount = principal + interest;

    cout << "Simple Interest: " << interest << endl;
    cout << "Total Amount: " << totalAmount << endl;

    return 0;
}
