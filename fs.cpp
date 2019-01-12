#include <iostream>
#include <string>
#include <vector>

/*
 * Na przykład:
 * split("/home/kurs/Desktop/2018-12-17", '/')
 * wynik:
 * wektor: ["home", "kurs", "Desktop", "2018-12-17"]
 */

std::vector <std::string> split(const std::string &input, char separator)
{
	std::vector <std::string> result;

	std::string currentPart;
	unsigned i = 0;

	while (i != input.size()) {
		if (input[i] != separator) {
			currentPart.push_back(input[i]);
		} else {
			if (!currentPart.empty()) {
				result.push_back(currentPart);
				currentPart.clear();
			}
		}

		++i;
	}

	if (!currentPart.empty())
		result.push_back(currentPart);

	return result;
}

struct FileObject {
	static const unsigned File = 0;
	static const unsigned Dir = 1;

	FileObject(const std::string &n, unsigned t)
	{
		name = n;
		type = t;
	}

	std::string name;
	unsigned type;
	std::vector <FileObject *> children;
};

class FileSystem {
public:
	FileSystem()
		: root("", FileObject::Dir)
	{
	}

	void makeDirectory(const std::string &where, const std::string &newDirName);
	void print() const;

private:
	bool makeDirRecursive(FileObject &current, const std::vector <std::string> &parts, unsigned part, const std::string &newDirName);
	void printRecursive(const FileObject &current, unsigned depth) const;

	FileObject root;
};

/*
 * Założenie:
 * parametr "where" to napis zawierający ścieżkę bezwzględną
 * tzn. zaczyna się od / i dalej może mieć podkatalogi oddzielane /
 */
void FileSystem::makeDirectory(const std::string &where, const std::string &newDirName)
{
	auto parts = split(where, '/');
	makeDirRecursive(root, parts, 0, newDirName);
}

bool FileSystem::makeDirRecursive(FileObject &current, const std::vector <std::string> &parts, unsigned part, const std::string &newDirName)
{
	if (part == parts.size()) {
		//Zadanie domowe: sprawdzić czy istnieje już obiekt o nazwie newDirName
		//jeśli tak, zwrócić false

		current.children.push_back(new FileObject(newDirName, FileObject::Dir));
		return true;
	}

	for (unsigned i = 0; i < current.children.size(); ++i) {
		if (current.children[i]->name == parts[part]) {
			if (current.children[i]->type != FileObject::Dir)
				return false; //element nie jest katalogiem

			return makeDirRecursive(*current.children[i], parts, part + 1, newDirName);
		}
	}

	//szukany element nie istnieje
	return false;
}

void FileSystem::print() const
{
	printRecursive(root, 0);
}

void FileSystem::printRecursive(const FileObject &current, unsigned depth) const
{
	for (unsigned i = 0; i < depth; ++i)
		std::cout << "    ";

	std::cout << current.name;
	if (current.type == FileObject::Dir)
		std::cout << '/';
	std::cout << '\n';

	if (current.type == FileObject::Dir) {
		for (unsigned i = 0; i < current.children.size(); ++i)
			printRecursive(*current.children[i], depth + 1);
	}
}

int main()
{
	FileSystem fs;
	fs.makeDirectory("/", "test");
	fs.makeDirectory("/", "qwe");
	fs.makeDirectory("/", "abc");

	fs.makeDirectory("/test", "home");

	fs.print();


	return 0;
}
