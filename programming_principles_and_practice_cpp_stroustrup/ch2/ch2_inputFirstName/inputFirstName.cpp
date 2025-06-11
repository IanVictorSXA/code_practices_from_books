// read and write a first name and age

import std;

int main()
{
	std::cout << "Please enter your first name and age:\n";
	std::string first_name = "???"; // first_name is a string
	double age = -1; // age as a double to allow for decimal values
	std::cin >> first_name >> age; // read characters into first name and age
	std::cout << "Hello, " << first_name << " (age " << 12*age << " months)!\n";
	return 0;
}