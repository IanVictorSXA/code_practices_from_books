//[2] Write a program in C++ that converts from miles to kilometers.
// Your program should have a reasonable prompt for the user 
// to enter a number of miles.Hint: A mile is 1.609 kilometers.

import std;

using namespace std;

int main()
{
	cout << "**Type exit to exit**\nPlease enter a distance in miles to convert to Kilometers: ";
	string input;
	double distance = -1, ratio = 1.609;

	while (cin >> input) {
		if (input == "exit") return 0;
		
		distance = stod(input);
		cout << distance << "mi is " << distance * ratio << "km\n\nEnter next distance in miles (or type exit): ";
	}
}