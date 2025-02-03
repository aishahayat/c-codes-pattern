
#include <iostream>
using namespace std;

int main() {
    int n,sum,i; 
    sum = 0;
    i = 1;

    cout << "Enter a positive integer (n): ";
    cin >> n;

    do {
        sum += i * i; 
         i++;
    } while (i <= n);

    cout << "Sum of squares of " << n << " natural numbers: " << sum;

    return 0;
}
