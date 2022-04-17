#include <string>
#include <iostream>

void cancelWord( std::string word, std::string& text, int posNumber) {

	for (int k = 0; k < word.size(); k++) {

		text[posNumber+k] = '*';

	}

}

void changeText(std::string &text, std::string word) {

	for (int i = 0; i < text.size(); i++) {

		int posNumber = 0;

		for (int j = 0; j < word.size(); j++) {
			if (text[i + j] == word[j]) {
				posNumber++;
			}
		}

		if (posNumber == word.size() && text[i-1] == ' ') {
			cancelWord(word, text, i);
		}
	}

}