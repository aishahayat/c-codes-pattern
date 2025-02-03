
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int count = 0, i = 0;

    cout << "Enter a string: ";
    cin >> str;

    do {
        switch (str[i]) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                count++;
                break;
        }
        i++;
    } while (i < str.length());

    cout << "Number of vowels: " << count;

    return 0;
}