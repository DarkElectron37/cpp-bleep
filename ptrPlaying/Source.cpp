#include <iostream>
#include <string>
#include "Header.h"

int main()
{

	std::string text = "This is a is is is test!";
	std::string word = "is";

	changeText(text, word);

	std::cout << text << std::endl;

	return 0;
}