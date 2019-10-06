# CPPND: Capstone Snake Game Example

This is the Capstone project of the Udacity C++ Nanodegree Program based on the starter repo found [here](https://www.udacity.com/course/c-plus-plus-nanodegree--nd213). The code for that repo was inspired by [this](https://codereview.stackexchange.com/questions/212296/snake-game-in-c-with-sdl) excellent StackOverflow post and set of responses.

<img src="snake_game.gif"/>

In this project, the code is expanded to properly finish a game party while offering to the user the option to continue playing each time a party is finished.

# Criteria:
1. The project accepts user input and processes the input.

The project accepts input from a user as part of the necessary operation of the program.

user.cpp line 14-29

2. The project makes use of references in function declarations.

At least two variables are defined as references, or two functions use pass-by-reference in the project code.

snake.h line 21, snake.cpp lines 22-29

user.h line 9, user.cpp lines 31-35

3. The project uses Object Oriented Programming techniques.

The project code is organized into classes with class attributes to hold the data, and class methods to perform tasks.

user.h and user.cpp

4. Classes use appropriate access specifiers for class members.

All class data members are explicitly specified as public, protected, or private.

user.h lines 6 to 12

5. Classes abstract implementation details from their interfaces.

All class member functions document their effects, either through function names, comments, or formal documentation. Member functions do not change program state in undocumented ways.

user.cpp and snake.cpp lines 22-29

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