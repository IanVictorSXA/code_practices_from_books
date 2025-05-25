// Exercise 0: tip calculator
// prompt bill amount and tip rate
// output tip and total amount (tip + bill)

import std;

using namespace std;

int main()
{
	string bill_str, tip_rate_str; // to store input values in string form
	double bill, tip_rate; // to store input values in int form

	cout << "Bill amount: $";
	cin >> bill_str; // bill amount as a string
	cout << "Tip rate: ";
	cin >> tip_rate_str; // tip_rate as a string
	try
	{
		bill = stod(bill_str); // convert string bill to double
	} catch (invalid_argument& error)
	{
		cerr << "Please enter a valid number for the bill amount";
		return 1;
	}
	try
	{
		tip_rate = stod(tip_rate_str) / 100; //convet string tip rate to double and divide by 100 to get a decimal
	}
	catch (invalid_argument& error)
	{
		cerr << "Please enter a valid number for the tip rate";
		return 1;
	}

	cout << fixed << setprecision(2); //round answers to 2 decimal places
	cout << "Tip: $" << bill * tip_rate << endl; // output tip
	cout << "Total: $" << bill * (1 + tip_rate) << endl; // output total amount
}