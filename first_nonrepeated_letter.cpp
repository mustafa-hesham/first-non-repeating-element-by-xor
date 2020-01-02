//This code is written by Mustafa Hesham Mohamed.
//My student code at FSSR is 201800378.

#include <iostream>
#include <string>

using namespace std;
string input;
char checker;
int main()
{
	cout<<"Please enter string to find the first unrepeated letter: ";
	cin>>input;
	checker = input[0];
	int x = 1;
	
	while (x < input.length())
	{
		checker ^= (input[x]);
		
		if (checker != 0 && x != 1)
		{
			break;
		}
		
		else
		x++;
	}
		
	cout<<"The first unrepeated letter is: "<<checker<<endl;
}
