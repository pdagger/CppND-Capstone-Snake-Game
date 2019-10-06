#include "data.h"
#include <iostream>
#include <string>

Data::Data() {
	OpenFile();
	// Find end of file
	dataFile.seekg(0, ios::end);
	// If empty file then create first line of file
	if (dataFile.tellg() == 0) {
		dataFile << "Player \t Score \t Size\n";
	}

	CloseFile();
}

void Data::OpenFile() {
	// Opens data file, if it doesn't exist, it is created
	dataFile.open("data.txt", std::fstream::in | std::fstream::out | std::fstream::app);
}

void Data::CloseFile() {
	dataFile.close();
}

void Data::WriteInFile(string name, int score, int size) {
	// Writes player's name, score and size in data file
	OpenFile();
	dataFile << name << "\t" << score << "\t" << size << "\n";
	CloseFile();
}
