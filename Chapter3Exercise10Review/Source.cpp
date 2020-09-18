//This program will prompt the user for a operation, and two operands.
//It will then output the result.  I will use the term 'operation' :) for the operation; oper1 and oper2 for the operands.

#include <iostream>

using namespace std;

int main()

{
	cout << "I will compute the two operands you give me.  Please your first operand in the space below:\n";
	double oper1 = 0;
	cin >> oper1;
	cout << "Very good!  Now, please give me your second value, followed by the Enter key\n";
	double oper2 = 0;
	cin >> oper2;
	cout << "Excellent!  Now, let me know what operation you want performed (add/sub/mul/div).\n"
		<< "You can use the corresponding symbol if you wish:\n";
	string operation;
	cin >> operation;
	double total = 3.141519;
	if (operation == "Add" || operation == "add" || operation == "+")
	{
		total = oper1 + oper2;
	}
	if (operation == "Sub" || operation == "sub" || operation == "-")
	{
		total = oper1 - oper2;
	}
	if (operation == "Mul" || operation == "mul" || operation == "*")
	{
		total = oper1 * oper2;
	}
	if (operation == "Div" || operation == "div" || operation == "/")
	{
		total = oper1 / oper2;
	}

		if (total == 3.141519)
	{
			cout << "I'm afraid something has gone badly wrong...PIss off, I can't help you!!!";
	}
	cout << "So, the total is " << total << ".\nHave a nice day!";
	return 0;
}