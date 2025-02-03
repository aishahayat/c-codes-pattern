#include<iostream>
using namespace std;
int main ()
{
int a=0;
int b=1;
int next;
int i=1;
int n;
cin>>n;
while (i<=n)
{
cout <<a;
next=a+b;
a=b;
b=next;
i++;
}
return 0;

}