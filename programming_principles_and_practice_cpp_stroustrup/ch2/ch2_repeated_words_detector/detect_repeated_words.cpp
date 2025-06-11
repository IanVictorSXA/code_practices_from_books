// this simple program detects and prints repeated words
// press CTRL + Z and enter  or CTRL+ C to exit command line

import std;

using namespace std;

int main()
{
	string previous, current;
	int number_of_words = 0;

	while (cin >> current)
	{
		number_of_words++;

		if (previous == current)
			cout << "word number " << number_of_words << " repeated: " << current << '\n';		
		previous = current;
	}
}
