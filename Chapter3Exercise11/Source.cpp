//This program is being used to calculate the amount of someone's change.
//It works by prompting the user for each of their amounts of cents, nickels, dimes, quarters, half-dollars, and dollar coins.

#include <iostream>

using namespace std;

int main()

{
	cout << "I'm going to tell you how many of each type of coin you have, then give you a total!\n";
	cout << "Please tell me how many pennies you have, followed by the Enter key\n";
	double penny_1 = -1;
	string pennies = "pennies";
	cin >> penny_1;
	if (penny_1 == 1)
		pennies = "penny";
	if (penny_1 == 0)
	{
		cout << "Nani mo nai, ne?   Okay, now do the same for the nickels:\n";
		pennies = " pennies";
	}
	if (penny_1 == 1)
	{
		cout << "Just the one, huh?  Okay, now do the same for the nickels:\n";
		pennies = " penny";
	}
	if (penny_1 > 1)
	{
		cout << "Okay, and now tell me how many nickels you have:\n";
		pennies = " pennies";
	}

	double nickel_1 = -1;
	string nickels = "nickels";
	cin >> nickel_1;
	if (nickel_1 == 1)
	string nickels = "nickel";
	if (nickel_1 == 0)
	{
		cout << "Nani mo nai, ne?   Okay, now do the same for the dimes:\n";
		nickels = " nickels";
	}
	if (nickel_1 == 1)
	{
		cout << "Just the one, huh?  Okay, now do the same for the dimes:\n";
		nickels = " nickel";
	}
	if (nickel_1 > 1)
	{
		cout << "Okay, and now tell me how many dimes you have:\n";
		nickels = " nickels";
	}

	double dime_1 = -1;
	string dimes;
	cin >> dime_1;
	if (dime_1 == 1)
		dimes = "dime";
	if (dime_1 == 0)
	{
		cout << "Nani mo nai, ne?   Okay, now do the same for the quarters:\n";
		dimes = " dimes";
	}
	if (dime_1 == 1)
	{
		cout << "Just the one, huh?  Okay, now do the same for the quarters:\n";
		dimes = " dime";
	}
	if (dime_1 > 1)
	{
		cout << "Okay, and now tell me how many quarters you have:\n";
		dimes = " dimes";
	}

	double quarter_1 = -1;
	string quarters;
	cin >> quarter_1;
	if (quarter_1 == 0)
	{
		cout << "Nani mo nai, ne?   Okay, now do the same for the half-dollars:\n";
		quarters = " quarters";
	}
	if (quarter_1 == 1)
	{
		cout << "Just the one, huh?  Okay, now do the same for the half-dollars:\n";
		quarters = "quarter";
	}
	if (quarter_1 > 1)
	{
		cout << "Okay, and now tell me how many half-dollars you have:\n";
		quarters = " quarters";
	}

	double half_dollar_1 = -1;
	string half_dollars;
	cin >> half_dollar_1;
	if (half_dollar_1 == 0)
	{
		cout << "Nani mo nai, ne?   Okay, now do the same for the dollar coins:\n";
		half_dollars = " half_dollars";
	}
	if (half_dollar_1 == 1)
	{
		cout << "Just the one, huh?  Okay, now do the same for the dollar coins:\n";
		half_dollars = "half-dollar";
	}
	if (half_dollar_1 > 1)
	{
		cout << "Okay, and now tell me how many dollar coins you have:\n";
		half_dollars = " half_dollars";
	}

	double dollar_1 = -1;
	string dollars;
	cin >> dollar_1;
	if (dollar_1 == 0)
	{
		cout << "Nani mo nai, ne?   Okay, here comes a summary:\n";
		dollars = " dollars";
	}
	if (dollar_1 == 1)
	{
		cout << "Just the one, huh?  Okay, here comes the summary:\n";
		dollars = "dollar";
	}
	if (dollar_1 > 1)
	{
		cout << "Okay, let me give you an overview:\n";
		dollars = " dollars";
	}

	cout << "You have " << penny_1 << " " << pennies << ".\n";
	cout << "You have " << nickel_1 << " " << nickels << ".\n";
	cout << "You have " << dime_1 << " " << dimes << ".\n";
	cout << "You have " << quarter_1 << " " << quarters << ".\n";
	cout << "You have " << half_dollar_1 << " " << half dollars << ".\n";
	cout << "You have " << half_dollar_1 << " " << dollars << ".\n\n\n";

	double cent_total = penny_1 + (nickel_1 * 5) + (dime_1 * 10) + (quarter_1 * 25) + (half_dollar_1 * 50) + (dollar_1 * 100);
	double dollar_total = cent_total / 100.00;
	cout << "You have a total of " << cent_total << " cents.\n"
		<< "In real terms, that is $" << dollar_total << " overall.\nHave a nice day!";
}
//Quick improvement:  remove these string pennies = "pennies" type things.  They are redundant.
//Just use the word in the...

//Functions can 