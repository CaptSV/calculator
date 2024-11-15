# Simple Calculator Program

A basic calculator program that takes user input limited to two numbers and performs an arthmetic operation based on user's choice.

## Description

This calculator program performs basic arithmetic operations: addition, subtraction, multiplication, and division. It's designed for beginners to understand the fundamentals of C++ programming that involves basic input/output, functions, conditionals, loops, and use of comments. 

## Getting Started

### Dependencies

* C++ Compiler (GCC/MinGW)
* Visual Studio Code
* Windows 11

### Installing

* Clone the repository
```
git clone https://github.com/CaptSV/calculator.git
```
* Open the project in your preferred editor

### Executing program

* Compile the program
```
g++ main.cpp -o main
```
* Run the program
```
./main
```

## Help

For common issues: 
* Ensure inputs are numeric as non-numeric inputs will cause errors.
* Entering operation choice recognizes more than 1 char input (Eg: '-1'). Says invalid for '-' but second iteration, will read '1' and proceed with the program under that choice.

## Authors

* Simon Valenzuela
* [GitHub](https://github.com/CaptSV)

## Version History

* 0.1
    * Initial Release
