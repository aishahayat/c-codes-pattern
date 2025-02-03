
#include <iostream>
using namespace std;
int main() {
    int marks;

    cout << "Enter student's marks: ";
    cin >> marks;

    if (marks >= 40)
        cout << "Student has passed.";
    else
        cout << "Student has failed.";

    return 0;
}