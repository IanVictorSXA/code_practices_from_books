// Write a program that takes an operation followed by two operands and outputs the result. For example:
// + 100 3.14
// * 45
// Read the operation into a string called operation and use an if - statement to figure out which 
// operation the user wants, for example, if (operation == "+").Read the operands into variables of 
// type double.Implement this for operations called + , −, *, / , plus, minus, mul, and div with their obvious meanings.

import std;

using namespace std;

int main()
{
	string operator1;
	double n1 = 0, n2 = 0, result = 0;

	cout << "Enter operator followed by two operands each separated by space: ";

	cin >> operator1 >> n1 >> n2;

	if (operator1 == "+" or operator1 == "plus") result = n1 + n2;
	else if (operator1 == "*" or operator1 == "mul") result = n1 * n2;
	else if (operator1 == "/" or operator1 == "div") result = n1 / n2;
	else if (operator1 == "-" or operator1 == "minus") result = n1 - n2;
	else
	{
		cout << "I do not understand operator\n";
		return 1;
	}

	cout << "= " << result << "\n";
}