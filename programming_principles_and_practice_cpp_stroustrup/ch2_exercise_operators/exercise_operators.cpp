// simple program to exercise operators

import std;

using namespace std;

int main()
{
	cout << "Please enter an integer value: ";

	int n = -1;

	cin >> n;
	cout << "n ==" << n
		<< "\nn+1 ==" << n + 1
		<< "\nthree times n ==" << 3 * n
		<< "\ntwice n ==" << n + n
		<< "\nn squared ==" << n * n
		<< "\ninteger division n by 2== " << n / 2
		<< "\nn module 2 == " << n % 2
		<< "\nsquare root of n ==" << sqrt(n);
}
