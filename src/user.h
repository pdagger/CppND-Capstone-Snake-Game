#ifndef USER_H
#define USER_H
#include <string>
using namespace std;

class User {
	public:
		bool Continue();
		
	private:
		void LowerCase(string &option);
};

#endif