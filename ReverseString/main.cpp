//Reverse a string in place
#include <iostream>
#include <string>

using namespace std;

void ReverseString(char *);

int main()
{
	char input[50];

	cout << "Enter a string:" << endl;	
	cin >> input;

	ReverseString(input);

	cout << input << endl;

	system("PAUSE");
	return 0;
}

void ReverseString(char *i_string)
{
	int len = 0;

	while (i_string[len] != '\0')
	{
		len++;
	}

	char *start = i_string;
	char *end = start + len - 1;

	while (end>start)
	{
		char temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
}