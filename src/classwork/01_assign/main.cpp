//Write the include statement for types.h here

//Write include for capturing input from keyboard and displaying output to screen
#include "types.h"
#include<iostream>


using std::cin; using std::cout;

int main() 
{
	int num =0;
 cout<<"Enter number: ";
  cin>>num;

 int result = multiply_numbers(num);

 cout<<"Result is: " <<result<<"\n";


 int num1 = 4;
 result = multiply_numbers(num1);
 cout<<"Result is: "<<result<<"\n";

	return 0;
}

