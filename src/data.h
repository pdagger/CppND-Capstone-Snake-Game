#ifndef DATA_H
#define DATA_H

#include <fstream>
#include <string>
#include <tuple>

using namespace std;

class Data {
	public:
		Data();
		void OpenFile();
		void CloseFile();
		void WriteInFile(string name, int score, int size);
		void WriteInFile(string name, int score, int size, string rewrite);
		void SortFile();
		void PrintTop5();

	private:
		fstream dataFile;


};
#endif