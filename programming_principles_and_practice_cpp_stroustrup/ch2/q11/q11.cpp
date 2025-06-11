// Write a program that prompts the user to enter some number of pennies (1-cent coins),
// nickels (5-cent coins), dimes (10-cent coins), quarters (25-cent coins), 
// half dollars (50-cent coins), and one-dollar coins (100-cent coins). 
// Query the user separately for the number of each size coin,
// e.g., “How many pennies do you have?” Then your program should print out something like this:
// You have 23 pennies.
// You have 17 nickels.
// You have 14 dimes.
// You have 7 quarters.
// You have 3 half dollars.
// The value of all of your coins is 573 cents.
// Make some improvements : if only one of a coin is reported, 
// make the output grammatically correct, e.g., 14 dimes and 1 dime(not 1 dimes).
// Also, report the sum in dollars and cents, i.e., .73 instead of 573 cents.

import std;

using namespace std;

int main()
{
	int penny = 0, nickel = 0, dime = 0, quarter = 0,
		half_dollar = 0, one_dollar = 0, total = 0;

	cout << "How many pennies do you have? ";
	cin >> penny;

	cout << "How many nickels do you have? ";
	cin >> nickel;

	cout << "How many dimes do you have? ";
	cin >> dime;

	cout << "How many quarters do you have? ";
	cin >> quarter;

	cout << "How many half dollars coins do you have? ";
	cin >> half_dollar;

	cout << "How many one-dollar coins do you have? ";
	cin >> one_dollar;

	total = penny + nickel * 5 + dime * 10 + quarter * 25 + half_dollar * 50 + one_dollar * 100;

	if (penny > 1) cout << "\nYou have " << penny << " pennies.\n";
	else cout << "\nYou have " << penny << " penny.\n";

	if (nickel > 1) cout << "You have " << nickel << " nickels.\n";
	else cout << "You have " << nickel << " nickel.\n";

	if (dime > 1) cout << "You have " << dime << " dimes.\n";
	else cout << "You have " << dime << " dime.\n";
	
	if (quarter > 1) cout << "You have " << quarter << " quarters.\n";
	else cout << "You have " << quarter << " quarter.\n";
	
	if (half_dollar > 1) cout << "You have " << half_dollar << " half dollar coins.\n";
	else cout << "You have " << half_dollar << " half dollar coin.\n";
	
	if (one_dollar > 1) cout << "You have " << one_dollar << " one-dollar coins.\n";
	else cout << "You have " << one_dollar << " one-dollar coin.\n";

	cout << "The value of all your coins is $" << total/100 << "." << total%100 << "\n";
}