#include "dna.h"
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/

double get_gc_content(std::string &dna)
{
	double result = 0;
	int count = 0;
	double Gcount = 0;
	double Ccount = 0;

	while (dna[count])
	{

		count++;
	}

	for (int i = 0; i < count; i++)
	{
		if (dna[i] == 'G')
		{
			Gcount++;
		}
		if (dna[i] == 'C')
		{
			Ccount++;
		}

	}

	
	result = (Gcount + Ccount) / count;

	return result;
}


/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/

std::string get_reverse_string(std::string dna)
{

	int count = 0;
	std::string reverse = {""};
	

	while (dna[count])
	{

		count++;
	}

	for (int i = count ; i >= 0; i--)
	{
		reverse += dna[i];

	}
	
	return reverse;
}

/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/
std::string get_dna_complement(std::string dna)
{

		std::string reversed;

	reversed = get_reverse_string(dna);

	int count = 0;
	while (dna[count])
	{
		count++;
	}
	
	for (int i = 0; i < count+1; i++)
	{

		if (reversed[i] == 'A')
		{
			reversed[i] = 'T';
		}
		else if (reversed[i] == 'T')
		{
			reversed[i] = 'A';
		}
		else if (reversed[i] == 'C')
		{
			reversed[i] = 'G';
		}
		else if (reversed[i] == 'G')
		{
			reversed[i] = 'C';
		}
		
	
	}

	return reversed;

}
