 
    
    
    
  #include<iostream>
using namespace std;
int main ()
{   int product, number, i ;
    product= 1;
    cout<< "enter a number "<<endl;
    cin>>number;
    do 
    { i = number %10;
      product=product*i ;
      number=number/10;
      
      }
      while (number>0);
      cout <<"product of digits="<<product;
      
      
      return 0 ;
      }
    
    
    
    
    
    
    