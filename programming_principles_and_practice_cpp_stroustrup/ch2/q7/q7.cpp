// Do exercise 6, but with three string values.So,
// if the user enters the values Steinbeck, Hemingway, 
// Fitzgerald, the output should be Fitzgerald, Hemingway, Steinbeck.

import std;

using namespace std;

int main()
{
	cout << "Please enter 3 words separated by comma and space so I can put them in lexical order: ";

	string s1, s2, s3, temp;

	cin >> s1 >> s2 >> s3;

	if (s1 > s2)
	{
		temp = s2;
		s2 = s1;
		s1 = temp;
	}
	if (s1 > s3)
	{
		temp = s3;
		s3 = s1;
		s1 = temp;
	}
	if (s2 > s3)
	{
		temp = s3;
		s3 = s2;
		s2 = temp;
	}

	cout << s1 << ", " << s2 << ", " << s3 << ".\n";
}

