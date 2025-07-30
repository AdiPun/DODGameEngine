#include <iostream>
#include "testObject.h"
#include <fstream>
#include <string>

int main() {
	std::cout << "Hello, World!" << std::endl;

	print();  // Call the function from testObject.cpp

	std::ifstream file(RESOURCES_PATH "file.txt");

	// read the file and print its contents
	if (file.is_open()) {
		std::string line;
		while (std::getline(file, line)) {
			std::cout << line << std::endl;
		}
		file.close();
	} else {
		std::cerr << "Unable to open file." << std::endl;
		}

	return 0;
}