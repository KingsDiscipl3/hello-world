// Preprocessor directive that includes header iostream 
#include <iostream>
#include <string>
using namespace std;

// Function declarations and definitions

// Simple outputs with mathematical examples
int DemoConsoleOutput001()
{
  cout << "This is a simple string literal" << endl;
  cout << "Writing number five: " << 5 << endl;
  cout << "Performing division 10 / 5 = " << 10 / 5 << endl;
  cout << "Pi when approximated is ss / 7 = " << 22 / 7 << endl;
  cout << "Pi actually is 22 / 7 = " << 22.0 / 7 << endl;
  
  return 0;
}

// The traditional Hello World function
int HelloWorld()
{
  cout << "Hello World" << endl;
}

// First input example
int InputOutputExample001()
{
  // Declare a variable to store an integer
  int inputNumber;
  
  cout << "Enter an integer: ";
  
  // Store user given integer input
  cin >> inputNumber;
  
  // Store the same but as string text
  cout << "Enter your name: ",
  string inputName;
  cin >> inputName;
  
  cout << inputName << " entered " << inputNumber << endl;
  
  return 0;
}  

// User input multiplication function
int UserMultiplication001()
{
  cout << "This function will help multiply 2 numbers" << endl;
  
  cout << "Enter the first number: ";
  int firstNumber = 0;
  cin >> firstNumber;
  
  cout << "Enter the second number: ";
  int secondNumber = 0;
  cin >> secondNumber;
  
  // Multiply two numbers and store the result in a variable
  int multiplicationResult = firstNumber * secondNumber;
  
  cout << firstNumber << " X " << secondNumber;
  cout << " = " << multiplicationResult << endl;
  
  return 0;
}

// Start of the program: function block main()
int main()
{
  
// Functions called with return to exit
  return DemoConsoleOutput001();
  return HelloWorld();
  return InputOutputExample001();
  
// Write to the screen
  std::cout << "Hello World" << std::endl;
  
// Return a value to the OS
  return 0;
}  
