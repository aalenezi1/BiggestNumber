//Author:
#include<iostream>

using namespace std; //so we don't need the prefix std::

int main()
{
 int number1,number2; 
  
  cout<<"Please enter a whole number:\n";
  
  cin>> number1;
  
  cout<<"Please enter another whole number:\n";
  
  cin>> number2;
  
  if( number1 > number2 ) {

  cout<<"Of those two numbers, The biggest is : "<<number1;
  }
  
else {
cout<<"Of those two numbers, The biggest is : "<<number2;
}
  cout<<endl<<"Thank you for playing.\n";

  return 0;
}
