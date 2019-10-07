#include "data.h"
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <tuple>

Data::Data() {
	OpenFile();
	// Find end of file
	dataFile.seekg(0, ios::end);
	// If empty file then create first line of file
	if (dataFile.tellg() == 0) {
		dataFile << "Player Score Size\n";
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
	dataFile << name << " " << score << " " << size << "\n";
	CloseFile();
}

void Data::SortFile() {
	// Sorts file with respect to score
	// The data is first stored in a vector where each element is
	// a tuple containing the info in each line (score, size, name)
	vector<tuple<int, int, string>> data;
	OpenFile();
	string line;
	// Not interested in first line
	getline(dataFile, line);
	// make operations after first line
	while (getline(dataFile, line)) {
		std::istringstream linestream(line);
		vector<string> line_data;
		string info;
		// append player, score and size in a vector
		while (getline(linestream, info, ' ')) {
			line_data.push_back(info);
		}
		// apennd tuples (score, size, name) to vector of tuples
		data.push_back(make_tuple(stoi(line_data[1]), stoi(line_data[2]), line_data[0]));
	}
	
}
