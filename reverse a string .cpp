
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    int i;
    cout << "Enter a string: ";
    cin >> str;
      i = str.length() - 1;
    do {
     
        cout << str[i];
        i--;
    } while (i >= 0);

    return 0;
}
