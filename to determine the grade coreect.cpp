#include<iostream>
using namespace std;

int main()
{
int marks;

cout<<"Enter your marks:" <<endl;
cin>>marks;
if(marks<=49)
{cout<<" grade:F"<<endl;}
else if(marks<=59)
{cout<<"grade:D"<<endl;}
else if(marks<=69)
{cout<<"grade:C"<<endl;}
else if(marks<=79)
{cout<<"grade:B"<<endl;} 
else if(marks<=89)
{cout<<"grade:A"<<endl;}
 else if(marks<0||marks>100)
 {cout<<"invalid input"<<endl;}
 else
return 0;
}