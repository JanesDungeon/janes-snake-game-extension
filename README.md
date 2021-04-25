# CPPND: Capstone Snake Game Example
This wicked Snake Game extension generates a poisonous fruit on a random basis. Once the fruit is eaten, the snake's directions are twisted to the opposite! Careful! Up is down and left is right. The wickedness will end as soon as the next normal food item is cought.

On behalf of the Capstone Project Rubric, following requirements were fulfilled:
(Loops/Functions/I/O):
- variety of control structures and functions : implemented new functions and extended existing functions eg. in game.h/game.cpp
- I/O input in the controller.h/controller.cpp
- explicit access specifiers in classes
- member initialization lists (eg game.h Constructor)
- classes encapsulate behavior: snake object in game class
- the project makes use of function references in function declarations (eg. renderer.h)


<img src="snake_game.gif"/>


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
