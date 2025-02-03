#include<iostream>
using namespace std;
int main()
{
    int n,c=1;
    cout << " Enter a number :";
    cin>>n;
    int f=1;
    while (c<=n)
    {
    f=f * c;
    c++;
    }
    cout << "Factorial of " << n << " is " << f ;
    return 0;
}    
    