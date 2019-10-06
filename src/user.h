#ifndef USER_H
#define USER_H

#include <string>

using namespace std;

class User {
	public:
		User();
		string GetName() { return _name; }
		bool Continue();

	private:
		void LowerCase(string &option);

		string _name;
};

#endif