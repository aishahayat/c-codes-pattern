#include <iostream>
using namespace std;
int main (){
  int num,multiplier=1;
  cout<<"enter a number:";
   cin>>num;
  do{
    cout<<num<<"*"<<multiplier<<"="<<num*multiplier<< endl;
 
    multiplier++;}
    while(multiplier<=10);
  
  return 0;
  }