#include<iostream>
using namespace std;

int main()
{
int number,multiplier;
    cout<<"enter a number"<<endl;
    cin>>number;
   for (multiplier=1;multiplier<=10; multiplier++)
    {
   cout<<number<<"*"<<multiplier<<"="<<(number*multiplier)<<endl;
   }
    return 0;
}