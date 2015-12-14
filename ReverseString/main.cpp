//Reverse a string in place
#include <iostream>

void ReverseString(char *);

int main()
{
	char input[50];

	std::cout << "Enter a string:" << std::endl;
	std::cin >> input;

	ReverseString(input);

	std::cout << input << std::endl;

	system("PAUSE");
	return 0;
}

void ReverseString(char * i_string)
{
	int len = 0;

	while (i_string[len])
	{
		len++;
	}

	char * start = i_string;
	char * end   = start + len - 1;
	char temp;

	while (end > start)
	{
		temp   = *start;
		*start = *end;
		*end   = temp;

		start++;
		end--;
	}
}