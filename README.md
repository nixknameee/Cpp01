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

- **Focus**: Demystifying references.
- **Key Components**:
  - String manipulation using pointers and references.
  - Exploration of memory address and value access patterns.
- **Code Overview**:
  - A string `"HI THIS IS BRAIN"` is initialized.
  - Two variables, `stringPTR` (a pointer) and `stringREF` (a reference), are created to point to this string.
  - The program prints:
    - The memory addresses of the string variable, the pointer, and the reference.
    - The values accessed directly through the string variable, dereferenced from the pointer, and accessed via the reference.
  - This exercise demonstrates how pointers and references can be used to access and manipulate data in C++.

#### Example Code Snippet:
```cpp
#include <iostream>

int main (void) {
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    // Printing the memory addresses
    std::cout << &string << ": Address of string variable " << std::endl;
    std::cout << stringPTR <<  ": Address held by stringPTR " << std::endl;
    std::cout << &stringREF << ": Address held by stringREF" << std::endl;

    // Printing the values
    std::cout << string << ": Value of string variable " << std::endl;
    std::cout << *stringPTR << ": Value pointed to by stringPTR"  << std::endl;
    std::cout << stringREF << ": Value pointed to by stringREF" << std::endl;

    return 0;
}
```


### Exercise 03: Unnecessary violence
- **Focus**: Understanding the differences between pointers and references.
- **Key Components**:
  - `Weapon` class with a type string and methods `getType()` and `setType()`.
  - Two classes, `HumanA` and `HumanB`, each possessing a weapon and the ability to attack.
- **Code Overview**:
  - The `Weapon` class stores the type of the weapon and allows setting and retrieving this type.
  - `HumanA` uses a reference to `Weapon`, while `HumanB` uses a pointer.
  - In the `main` function, a `Weapon` object is created and then passed to both `HumanA` and `HumanB`.
  - Both Human classes have an `attack` method, enabling them to attack with their respective weapons.
  - The main distinction lies in how `HumanA` and `HumanB` store and access their weapons, illustrating the concepts of references and pointers in C++.


### Exercise 04: Sed is for losers
- **Focus**: File manipulation with `ifstream` and `ofstream`.
- **Task**: Implement a program that performs string replacement in a file.
- **Code Overview**:
  - `main.cpp`: The main file checks the command-line arguments and handles user input. It uses `isFileEmpty` to check if the provided file is empty and calls `replace` for string replacement.
  - `replace.cpp`: Contains the `replace` function. It opens the file, reads its content into a string, replaces occurrences of `string1` with `string2`, and writes the result to a new file.
  - `replace.hpp`: Header file defining constants for text formatting and the prototype for the `replace` function.
- **Key Features**:
  - Error handling for incorrect command-line arguments, empty strings, and empty files.
  - Use of standard C++ file streams (`ifstream` and `ofstream`) for file operations.
  - String processing using the standard `std::string` class and its functions.
  - Dynamic string replacement logic within the file content.
 
  - 

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

