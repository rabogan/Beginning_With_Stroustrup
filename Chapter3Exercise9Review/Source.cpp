//The purpose of this program is to convert spelled-out numbers into digits

#include <iostream>

using namespace std;

int main()

{
	cout << "In the space below, please spell out a number between 0 and 3 for me:\n";
		string num_spelled;
		cin >> num_spelled;

		int digit=-1;

		if (num_spelled == "zero"||num_spelled== "Zero")
		{
			digit = 0;
		}

		if (num_spelled == "one"||num_spelled=="One")
		{
			digit = 1;
		}

		if (num_spelled == "two" || num_spelled == "Two")
		{
			digit = 2;
		}

		if (num_spelled == "three" || num_spelled=="Three")
		{
			digit=3;
		}

		if (digit == -1)
		{
			cout << "Oh, I'm afraid I can't recognise what you put in me...\n";
		}

		if (digit > -1)
		{
			cout << "Thank you!  As you already know, the string '" << num_spelled << "' corresponds to '" << digit << "'.\n" 
				<< "This program is just a way of converting it!";
		}
		}