#include <iostream>
#include <string>

using namespace std;
string input;
char checker;
char final;
int main()
{
	cout<<"Please enter string to find the first non-repeating letter: ";
	cin>>input;
	int x = 0;
	while (x < input.length())
	{
		checker ^= input[x];
		
		for (int t = 0; t < input.length(); t++) /*This loop is for checking that the output is a member of the input string
not a random charachter! */
		{
			if (checker == input[t]) {
				final = checker;
				cout<<"The final is: "<<final<<endl; //Tracing the final output.
				break;
			}
			else
			continue;
		}
		
		x++;
	}
	
	if (checker == NULL) cout<<"There is no non-repeating letter!"<<endl;
	else
	cout<<"The first non-repeated letter is: "<<final<<endl;
}
