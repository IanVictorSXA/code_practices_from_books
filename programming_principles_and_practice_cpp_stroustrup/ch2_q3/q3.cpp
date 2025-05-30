// [3] Write a program that doesn’t do anything, 
// but declares a number of  variables with legal and
// illegal names (such as int double = 0;), so that you can see how the compiler reacts.

int main()
{
	// illegal
	int double = 0.0;

	int 1b = 1;

	char @$ = 'a';

	int a b = 12;

	short bomba.clata = -1;

	float serious_float! = 1.1;

	int google.com = 123;

	// legal
	int _abc = 1; // underscore first should be avoided

	short precise_number = 2;

	double a = 1.1;

	double a1 = 1.11;

	float red = 1.2;

	int precise_number1$ = 12;
}