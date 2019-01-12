#include <iostream>
#include <sstream>
#include <string>
#include <vector>

/*
bool exists(const std::vector <std::string> &vec, const std::string &x)
{
	for (unsigned i = 0; i < vec.size(); ++i) {
		if (vec[i] == x)
			return true;
	}

	return false;
}
*/

bool exists(const std::vector <std::string> &vec, const std::string &x)
{
	for (const auto &word : vec) {
		if (word == x)
			return true;
	}

	return false;
}

int main()
{
	unsigned result = 0;

	for (std::string line; std::getline(std::cin, line); ) {
		std::vector <std::string> words;
		std::stringstream ss(line);

		bool valid = true;

		for (std::string word; ss >> word; ) {
			if (exists(words, word)) {
				valid = false;
				break;
			}

			words.push_back(word);
		}

		if (valid)
			++result;
	}

	std::cout << result << '\n';

	return 0;
}
