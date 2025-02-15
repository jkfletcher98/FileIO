#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

int main(){
	std::ifstream inFile;
	std::stringstream converter;
	std::string currentLine;

	int num1;
	int num2;
	std::string text;

	inFile.open("data.csv");
	while(getline(inFile, currentLine)) {
		// test getline
		std::cout << currentLine << std::endl;
		
		converter.clear();
		converter.str("");

		converter << currentLine;

		getline(ss, currentLine, ",");
		converter << num1;

		getline(ss, currentLine, ",");
		converter << num2;

		getline(ss, currentLine, ",");
		converter << text;

		converter.clear();
		converter.str("");

		converter << num1 << num2 << std::endl;

		int total = num1 + num2;

		for (total) { 
			std::cout << text << std::endl;
		}; // end for
	}; // end getline

	inFile.close();

	return[0];
}; // end main
