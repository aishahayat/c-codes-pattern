#include<iostream>
using namespace std;
int main ()
{
int n;
int m;
int c;
cout << "Enter a number" << endl;
cin>>n;
cin>>m;
cin>>c;
if (n>=m&&n>=c)
{
cout << " The largest number is:" << n;
}
else if (m>=n&&m>=c)
{
cout << " The largest number is : " << m;
}
else
{
cout << "The largest number is : " << c;
}
return 0;
}
    