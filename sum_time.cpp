#include <iostream>
#include <string>

int main()
{
	std::string password;

	std::cout << "Podaj hasło:\n";
	std::cin >> password;

	if (password == "Tajne_hasuo") {
		std::cout << "ACCESS GRANTED\n";
	} else {
		std::cout << "ACCESS DENIED\n";
	}

	return 0;
}
