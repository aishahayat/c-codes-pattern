
#include <iostream>
using namespace std;
int main() {
    int choice;

    cout << "Enter your choice (1-5):"<<endl;
    cin >> choice;

    switch (choice) {
    case 1:
        cout << "You chose option 1" << std::endl;
        break;
    case 2:
        cout << "You chose option 2" << std::endl;
        break;
    case 3:
        cout << "You chose option 3" << std::endl;
        break;
    case 4:
        cout << "You chose option 4" << std::endl;
        break;
    case 5:
        cout << "You chose option 5" << std::endl;
        break;
    default:
        cout << "Invalid choice" << std::endl;
        break;
    }

    return 0;
}
    