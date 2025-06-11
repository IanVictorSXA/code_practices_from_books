// [6] Write a program that prompts the user to enter three
// integer values, and then outputs the values in numerical 
// sequence separated by commas. So, if the user enters the 
// values 10 4 6, the output should be 4, 6, 10. If two values 
// are the same, they should just be ordered together. So, the 
// input 4 5 4 should give 4, 4, 5.

import std;

using namespace std;

int main()
{
	cout << "Please enter 3 digits separated by space so I can put them in ascending order: ";

	int i1 = 0, i2 = 0, i3 = 0, temp=0;
	
	cin >> i1 >> i2 >> i3;

	if (i1 > i2)
	{
		temp = i2;
		i2 = i1;
		i1 = temp;
	}
	if (i1 > i3)
	{
		temp = i3;
		i3 = i1;
		i1 = temp;
	}
	if (i2 > i3)
	{
		temp = i3;
		i3 = i2;
		i2 = temp;
	}

	cout << i1 << ", " << i2 << ", " << i3 << ".\n";
}

