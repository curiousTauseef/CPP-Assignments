//Remove a given character from a string in place ( "AABBAABBC" - 'A' becomes "BBBBC").
#include <iostream>

void RemoveChar(char *, char);

int main()
{
	char input[50];
	char c;

	std::cout << "Enter a string:" << std::endl;
	std::cin >> input;
	std::cout << "Enter a character to remove from string:" << std::endl;
	std::cin >> c;

	RemoveChar(input, c);

	std::cout << input << std::endl;

	system("PAUSE");
	return 0;
}

void RemoveChar(char * i_string, char i_c)
{
	char * readPtr  = i_string;
	char * writePtr = i_string;

	while (*readPtr)
	{
		*writePtr = *readPtr;
		writePtr += (*writePtr != i_c);
		readPtr++;
	}

	*writePtr = '\0';
}