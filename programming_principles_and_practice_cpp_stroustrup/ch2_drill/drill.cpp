// read and write a first name and age

import std;

using namespace std;

int main()
{
	cout << "Enter the name of the person you want to write to: ";
	string first_name;	

	cin >> first_name; // read characters into first name and age
	string friend_name;
	cout << "\n Enter name of other friend: ";
	cin >> friend_name;
	cout << "Please enter recipient's age: ";
	int age = -1;
	cin >> age;
	cout << "\nDear " << first_name << ",\n" << "\tHow are you? I am fine. I miss you.\nI hope we can make cookies together someday."
		<< "We need to buy a good chocolate if we want to make them pretty good Have you seen " << friend_name << " lately?"

}