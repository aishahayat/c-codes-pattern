#include <iostream>
using namespace std;
int main (){
  int i=1;
   int sum=0;
  do {
  sum +=i;
  i++;}
  
  while(i<=10);
  cout<<"sum of numbers 1to 10:"<<sum<<endl;
  return 0;
  }