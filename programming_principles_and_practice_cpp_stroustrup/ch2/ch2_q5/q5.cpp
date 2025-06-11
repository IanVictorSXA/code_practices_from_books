// [5] Modify the program above to ask the user to enter floating-point
// values and store them in double variables.Compare the outputs of the
// two programs for some inputs of your choice.Are the results the same? 
// Should they be ? What’s the difference ?

import std;

using namespace std;

int main()
{
	cout << "Please enter 2 floating-point values separated by space to determine which one is larger, sum, difference, production, and ratio: ";

	double val1 = 0, val2 = 0;

	cin >> val1 >> val2;

	if (val1 > val2) cout << val1 << " is larger than " << val2 << "\n";
	else if (val1 < val2) cout << val1 << " is smaller than " << val2 << "\n";
	else cout << "Values are equal\n";

	cout << "sum: " << val1 + val2
		<< "\ndifference: " << val1 - val2
		<< "\nproduct: " << val1 * val2
		<< "\nratio (first value / second value): " << val1 / val2;

	// the difference is that now it accepts floating point values and yields floating point values for each operation
}