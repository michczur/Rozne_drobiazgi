#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

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

		for (std::string word; ss >> word; ) {
			words.push_back(word);
		}

		std::sort(words.begin(), words.end());

		bool valid = true;
		for (unsigned i = 1; i < words.size(); ++i) {
			if (words[i] == words[i - 1]) {
				valid = false;
				break;
			}
		}

		if (valid)
			++result;
	}

	std::cout << result << '\n';

	return 0;
}
