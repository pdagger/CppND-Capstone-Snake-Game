#include "user.h"
#include <iostream>
#include <locale>  

User::User(){
	string name;
	cout << "Player name: ";
	cin >> name;
	_name = name;
}

bool User::Continue(){
	// Asks the user if he wants to play another party,
	// depending on the answer the output is true or false
	while (true) {
		// Ask user and get input
		string option;
		cout << "Do you want to play again? [y/n]: ";
		cin >> option;
		// Make input lower case
		LowerCase(option);
		// Check answer
		if ((option == "n") || (option == "no")){
			return false;
		}
		else if ((option == "y") || (option == "yes")){
			return true;
		}
		else{
			cout << "Incorrect input. Please try again. ";
			continue;
		}
	}
}

void User::LowerCase(string &option) {
	// Transforms by refernce input string to lower case
	for (char &c: option)
		c = tolower(static_cast<unsigned char>(c));
}