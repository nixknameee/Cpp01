# C++ Module 01 Project README

## Overview
This project, part of the C++ Module 01, focuses on introducing and reinforcing concepts in memory allocation, pointers to members, references, and switch statements in C++.

## Prerequisites
- **Compilation**: Code must compile with C++ and flags `-Wall -Wextra -Werror`.
- **Standard**: Follow the C++98 standard; avoid C++11 and later features.

## Forbidden Practices
- Functions implemented in header files (except templates).
- Makefiles not compiling with required flags or using compilers other than C++.
- Use of forbidden functions or keywords (`*alloc`, `*printf`, `free`, `using namespace`, `friend`).
- Use of external libraries or non-C++98 features.

## Exercises

### Exercise 00: BraiiiiiiinnnzzzZ
- Focus: Memory allocation in C++.
 **Implementation**:
  - `Zombie` class with private `name` attribute.
  - `announce` method for Zombies to introduce themselves.
  - `newZombie` function to create and return a new Zombie.
  - `randomChump` function to create a Zombie that announces itself and gets destroyed automatically.
  - Main function demonstrates creating a Zombie on the heap and on the stack.
- **Code Structure**:
  - `main.cpp`: Entry point demonstrating Zombie creation and annihilation.
  - `newZombie.cpp`: Implements `newZombie` to allocate a Zombie dynamically.
  - `randomChump.cpp`: Implements `randomChump` for stack-based Zombie.
  - `Zombie.cpp`: Contains `Zombie` class constructor, destructor, and `announce`.
  - `Zombie.hpp`: Header file for the `Zombie` class with class declaration.


### Exercise 01: Moar brainz!
- **Focus**: Allocating multiple objects simultaneously.
- **Task**: Implement a `zombieHorde` function using `new[]`.
- **Code Summary**:
  - **main.cpp**: 
    - A horde of zombies (`Zombie*`) is created using the `zombieHorde` function with a specified number (`N`).
    - Each zombie in the horde announces itself using the `announce` method.
    - The horde is then deleted using `delete[]`.
  - **Zombie.cpp**:
    - Contains the implementation of the `Zombie` class.
    - The constructor (`Zombie(std::string name)`) initializes the zombie's name.
    - The destructor prints a debug message when a zombie is destroyed.
    - `announce` method prints the zombie's announcement.
    - `setZombie` method sets the name of the zombie.
  - **Zombie.hpp**:
    - Header file for the `Zombie` class.
    - Declares constructors, destructor, and member functions.
  - **zombieHorde.cpp**:
    - Implements the `zombieHorde` function.
    - Allocates an array of `Zombie` objects on the heap.
    - Initializes each zombie's name and returns a pointer to the first zombie.

**Note**: This exercise demonstrates dynamic memory allocation for multiple objects, proper object initialization, and memory management in C++.

### Exercise 02: HI THIS IS BRAIN
- Focus: Demystifying references.
- Key Components: Manipulating a string using pointers and references.

### Exercise 03: Unnecessary violence
- Focus: Differences between pointers and references.
- Key Components: `Weapon`, `HumanA`, and `HumanB` classes.

### Exercise 04: Sed is for losers
- Focus: File manipulation.
- Key Components: String replacement in a file using `ifstream` and `ofstream`.

### Exercise 05: Harl 2.0
- Focus: Pointers to class member functions.
- Key Components: `Harl` class with various log levels.

### Exercise 06: Harl filter
- Focus: Using switch statements.
- Key Components: Filtering messages in `harlFilter` based on log levels.



---

**Version**: 10  
**Contents**:
1. Introduction
2. General Rules
3. Exercises (00 to 06)

