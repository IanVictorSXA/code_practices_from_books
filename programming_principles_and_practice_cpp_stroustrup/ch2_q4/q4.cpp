// [4] Write a program that prompts the user to enter two integer values.
// Store these values in int variables named val1 and val2. Write your 
// program to determine the smaller, larger, sum, difference, product, 
// and ratio of these values and report them to the user.

import std;

using namespace std;

int main()
{
	cout << "Please enter 2 integer values separated by space to determine which one is larger, sum, difference, production, and ratio: ";

	int val1 = 0, val2 = 0;

	cin >> val1 >> val2;

	if (val1 > val2) cout << val1 << " is larger than " << val2 <<"\n";
	else if (val1 < val2) cout << val1 << " is smaller than " << val2 << "\n";
	else cout << "Values are equal\n";

	cout << "sum: " << val1 + val2
		<< "\ndifference: " << val1 - val2
		<< "\nproduct: " << val1 * val2
		<< "\n integer ratio (first value / second value): " << val1 / val2;

}