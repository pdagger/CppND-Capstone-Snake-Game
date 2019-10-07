# CPPND: Capstone Snake Game Example

This is the Capstone project of the Udacity C++ Nanodegree Program based on the starter repo found [here](https://www.udacity.com/course/c-plus-plus-nanodegree--nd213). The code for that repo was inspired by [this](https://codereview.stackexchange.com/questions/212296/snake-game-in-c-with-sdl) excellent StackOverflow post and set of responses.

<img src="snake_game.gif"/>

In this project, the code is expanded to properly finish a game party while offering to the user the option to continue playing each time a party is finished. When the user doesn't want to play anymore, the prompt displays the historically top 5 players that have played the game.

To accomplish the described behavior, two additional classes were created: User and Data. For each one, .h and cpp files were created. The User class asks for the player's name and keeps it in memory while at the same time it contains functions to ask the user if he/she wishes to continue playing after the snake dies or if prefers to quit the game.

The Data class, manages everything related to the game statistics and stores them on file. Each time a party is finished, the user's name, score and snake size is saved into a data base. When the user decides to quit the game, the data base is sorted in descending order with respect to the saved scores and the top 5 players with scores and snake sizes are displayed to the user. If there is not a data base in the computer, the Data class creates a Data base on the build folder. Usually this happens when the game is played for the first time or if the user's manually deletes the data base.

To pass the project at least 5 optional criteria need to be accomplished. The section below describes at least 5 criteria that the project meets.

# Criteria:

##### 1. The project demonstrates an understanding of C++ functions and control structures.

A variety of control structures are used in the project. The project code is clearly organized into functions.

See main.cpp, user.h, user.cpp, data.h and data.cpp.

##### 2. The project reads data from a file and process the data, or the program writes data to a file.

The project reads data from an external file or writes data to a file as part of the necessary operation of the program.

See data.cpp. The constructor creates a file and the other functions read or write into that file.

##### 3. The project accepts user input and processes the input.

The project accepts input from a user as part of the necessary operation of the program.

See user.cpp lines 14-29.

##### 4. The project uses Object Oriented Programming techniques.

The project code is organized into classes with class attributes to hold the data, and class methods to perform tasks.

See user.h, user.cpp, data.h and data.cpp.

##### 5. The project makes use of references in function declarations.

At least two variables are defined as references, or two functions use pass-by-reference in the project code.

See snake.h line 21, snake.cpp lines 22-29.

See user.h line 9, user.cpp lines 31-35

##### 6. The project uses Object Oriented Programming techniques.

The project code is organized into classes with class attributes to hold the data, and class methods to perform tasks.

See files user.h and user.cpp, and data.h and data.cpp.

##### 7. Classes use appropriate access specifiers for class members.

All class data members are explicitly specified as public, protected, or private.

See user.h lines 6 to 12 and data.h.

##### 8. Classes abstract implementation details from their interfaces.

All class member functions document their effects, either through function names, comments, or formal documentation. Member functions do not change program state in undocumented ways.

See comments on functions for user.cpp and data.cpp,  plus snake.cpp at lines 22-29.

## Dependencies for Running Locally
* cmake >= 3.7
  * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1 (Linux, Mac), 3.81 (Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* SDL2 >= 2.0
  * All installation instructions can be found [here](https://wiki.libsdl.org/Installation)
  * Note that for Linux, an `apt` or `apt-get` installation is preferred to building from source.
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools](https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory in the top level directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./SnakeGame`.