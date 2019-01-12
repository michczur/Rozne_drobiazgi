#include <iostream>
#include <set>
#include <sstream>
#include <string>

int main()
{
	unsigned result = 0;

	for (std::string line; std::getline(std::cin, line); ) {
		std::stringstream ss(line);

		bool valid = true;

		std::set <std::string> words;
		for (std::string word; ss >> word; ) {
			//std::set <std::string>::iterator iter = words.find(word);
			auto iter = words.find(word);
			if (iter != words.end()) {
				valid = false;
				break;
			}

			words.insert(word);
		}

		if (valid)
			++result;
	}

	std::cout << result << '\n';

	return 0;
}
