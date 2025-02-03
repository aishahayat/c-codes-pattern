#include <iostream>
using namespace std;
int main ()
{
int i,n,sum=0;
cout <<"Enter a number:";
cin>>n;
for ( int i=1;i<n;i++)
{
if (n%i==0)
{
sum=sum+i;
}
}
if (n==sum)
{
cout << n << " is a perfect number ";
}
else
cout << n<< " is a Not perfect number ";
return 0;
}