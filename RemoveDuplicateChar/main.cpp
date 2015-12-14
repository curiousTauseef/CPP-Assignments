//Remove side-by-side duplicate characters in a string ("AAA BBB" becomes "A B") in place.
#include <iostream>

void RemoveDuplicateChar(char *);

int main()
{
	char input[50];

	std::cout << "Enter a string:" << std::endl;
	std::cin >> input;

	RemoveDuplicateChar(input);

	std::cout << input << std::endl;

	system("PAUSE");
	return 0;
}

void RemoveDuplicateChar(char * i_string)
{
	char * readPtr = i_string;
	char * writePtr = i_string;

	while (*readPtr)
	{
		*writePtr = *readPtr;
		writePtr += (*writePtr != *readPtr);
		std::cout << *readPtr << std::endl << *writePtr << std::endl;
		readPtr++;
	}

	*writePtr = '\0';
}