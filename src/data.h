#ifndef DATA_H
#define DATA_H

#include <fstream>

using namespace std;

class Data {
	public:
		Data();
		void OpenFile();
		void CloseFile();
		void WriteInFile(string name, int score, int size);
		void SortFile();

	private:
		fstream dataFile;


};
#endif