// Write a program to test an integer value to determine
// if it is odd or even. As always, make sure your output
// is clear and complete. In other words,  don’t just output
// yes or no. Your output should stand alone, like The value 4 is an even number.

import std;

using namespace std;

int main()
{
	int num = 0;
	string result;

	cout << "Enter a number to see if it is odd or even: ";
	cin >> num;

	if (num % 2) result = "odd";
	else result = "even";

	cout << num << " is " << result << ".\n";
}