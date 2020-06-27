//write include statements
#include "dna.h"
#include<string>
#include<iostream>


//write using statements

using std::cout;
using std::cin;
/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{


	
		
		char choice;
		std::string name;
		double percentage;
		std::string reversed;


		do
		{

			cout << "1. Enter 1 to get GC content: \n";
			cout << "2. Enter 2 for DNA Complement: \n";
			cout << "3. Enter 'y' or 'Y' to exit the program: \n";
			cin >> choice;

			switch (choice)
			{
			case '1':

				cout << "enter a string DNA for GC content \n";
				cin >> name;
				cout << "\n";
				cout << "The result from The GC string you gave: \n";
				cout << "Result: " << get_gc_content(name) << "\n";
				percentage = get_gc_content(name) * 100;
				cout << "Result: " << percentage << "%" << "\n" << "\n" << "\n";
				break;

			case '2':

				cout << "enter a string DNA to for DNA Compliment \n";
				cin >> name;
				cout << "\n";

				 get_dna_complement(name);
				

				cout << "Result for DNA compliment: \n";
				cout << "Result: " << get_dna_complement(name) << "\n";
				cout << "\n" << "\n";
				break;

			default:
			   {
				if (choice == 'Y' || choice == 'y')
				 {
					//so i had to do this here for it could exit properly
					cout << "Program exited \n";
					return 0;
				 }
				  cout << "You didnt enter a 1 or a 2, try again \n";
			   }
			}



			} while (choice != 'Y' || choice != 'y');
			//I cant seem to get his program to exit the loop
			cout << "Program exited \n";
		
	cout << "Program exited \n";

	
	return 0;
}