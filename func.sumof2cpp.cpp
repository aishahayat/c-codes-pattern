
#include <iostream>
using namespace std;

int sum(int a, int b) {
  return a + b;
}

int main() {
  int num1 = 5;
  int num2 = 2;

  int result = sum(num1, num2);
  cout << "Sum: " << result << endl;

  return 0;
}
