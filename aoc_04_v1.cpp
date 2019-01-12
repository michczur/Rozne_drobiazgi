#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int main()
{
	unsigned result = 0;

	for (std::string line; std::getline(std::cin, line); ) {
		std::vector <std::string> words;
		std::stringstream ss(line);

		for (std::string word; ss >> word; ) {
			words.push_back(word);
		}

		bool valid = true;

		for (unsigned i = 0; i < words.size(); ++i) {
			for (unsigned j = i + 1; j < words.size(); ++j)
				if (words[i] == words[j])
					valid = false;
		}

		if (valid)
			++result;
	}

	std::cout << result << '\n';

	return 0;
}
