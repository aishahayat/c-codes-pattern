#include<iostream>
using namespace std;
int main ()
{
int a;
int b;
cin>>a;
cin>>b;
cout << " Before Swaping " << endl;
cout << "The value of a is:"<< a<< endl;
cout << " The value of b is:"<<b<< endl;
a=a+b;
b=a-b;
a=a-b;
cout << " After Swaping " << endl;
cout << " The value of a is:"<<a<< endl;
cout << " The value of b is:"<<b<< endl;
return 0;
}
     