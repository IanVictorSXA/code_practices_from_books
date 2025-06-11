// testing narrowing conversions
// press CTRL + C or CTRL + Z and enter to quit

import std;

using namespace std; 

int main()
{
	double d = 0;
	while (cin >> d) {
		int i = d;
		char c = i;
		cout << "d==" << d
			<< " i==" << i
			<< " c==" << c
			<< " char(" << c << ")\n";
	}
	return 0;
}