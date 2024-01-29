#include <iostream>
#include <string>

int main()
{
	std::string inputText;

	while (true)
	{
		std::cout << "Enter a number: ";
		std::cin >> inputText;

		bool isInputTextNumber = true;

		for (int index = 0; index < inputText.length(); index++)
		{
			if (index == 0)
			{
				if (inputText[index] == '-')
				{
					continue;
				}
			}

			if (!isdigit(inputText[index]))
			{
				isInputTextNumber = false;
				break;
			}
		}

		if (!isInputTextNumber)
		{
			continue;
		}

		char lastSymbol = inputText[inputText.length() - 1];
		short int lastDigit = lastSymbol - '0';

		// upper two rows could be replaced with long long int number = std::stoi(inputText). I want to avoid using the long long

		if (lastDigit % 2)
		{
			std::cout << "odd" << std::endl;
		}
		else
		{
			std::cout << "even" << std::endl;
		}
	}


    return 0;
}