// prompt for name, recipient's name and age, and other friend's name, and write a letter
// message changes according to age given
import std;

using namespace std;

int main()
{
	cout << "Enter your name: ";
	string username;
	cin >> username;
	cout << "Enter the name of the person you want to write to: ";
	string first_name;	

	cin >> first_name; // read characters into first name
	cout << "Please enter " << first_name << "'s age: ";
	int age = -1;
	cin >> age;
	if (age <= 0 || age >= 110) {
		cerr << "You are kidding!";
		return 1;
	}
	string friend_name;
	cout << "Enter name of other friend: ";
	cin >> friend_name;
	
	cout << "\nDear " << first_name << ",\n" << "    How are you? I am fine. I miss you.\nI hope we can make cookies together someday.\n"
		<< "We need to buy a good chocolate if we want\nto make them pretty good. Have you seen " << friend_name << "\nlately?"
		<< " I hear you just had a birthday and you\nare " << age << " years old.";

	if (age < 12) cout << " Next year you will be " << age + 1 << ".";
	else if (age == 17) cout << " Next year you will be able to \nvote.";
	else if (age > 70) cout << " Are you retired?";

	cout << "\n\nYours sincerely,\n\n\n" << username;

}