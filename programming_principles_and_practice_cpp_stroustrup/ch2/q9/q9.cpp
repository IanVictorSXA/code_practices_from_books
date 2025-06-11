// Write a program that converts spelled-out numbers 
// such as “zero” and “two” into digits, such as 0 and 2. 
// When the user inputs a number, the program should print 
// out the corresponding digit. Do it for the values 0, 1, 2, 3, and 4
// and write out not a number I know if the user enters something that doesn’t
// correspond, such as stupid computer!.

import std;

using namespace std;

int main()
{
	string spelled_out_num;
	cout << "Enter a spelled-out number in the range 0 to 4: ";

	cin >> spelled_out_num;

	if (spelled_out_num == "zero") spelled_out_num = "0";
	else if (spelled_out_num == "one") spelled_out_num = "1";
	else if (spelled_out_num == "two") spelled_out_num = "2";
	else if (spelled_out_num == "three") spelled_out_num = "3";
	else if (spelled_out_num == "four") spelled_out_num = "4";
	else spelled_out_num = "not a number I know";

	cout << "result: " << spelled_out_num << "\n";
}