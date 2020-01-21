//This code is written by Mustafa Hesham Mohamed.
//My student code at FSSR is 201800378.

#include <iostream>
#include <string>
using namespace std;

char checker, final, temp;
int x = 0;
string input;

int main()
{
	cout<<"Please enter string to check for first non-repeated letter: ";
	cin>>input;
	
	for (int x = 0; x < input.length(); x++)
	{
		checker ^= input[x];
		if (checker == NULL) temp = input[x];
		
		for (int d = 0; d < input.length(); d++) /*This loop is for checking that the output is an element of the input string
not a random charachter! */
		{
			if (checker == input[d]) 
			{
				final = checker;
				break;
			}
			else
			continue;
		}
		if (final == temp) checker = NULL;
	}
	
	if (checker == NULL) cout<<"There is no non-repeated character in this string!"<<endl;
	else if (checker != NULL)cout<<"The first non-repeated character is: "<<final<<endl;
}
