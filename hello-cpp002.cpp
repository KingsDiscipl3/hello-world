#include <iostream>
#include <string>
using namespace std;

// Three global integers
int firstNumber = 0;
int secondNumber = 0;
int multiplicationResult = 0;

void MultiplyNumbers ()
{
  cout << "Enter the first number: ";
  cin >> firstNumber;
  
  cout << "Enter the second number: ";
  cin >> secondNumber;
  
  multiplicationResult = firstNumber * secondNumber;
  
  cout << "Displaying from MultipleNumbers(): ";
  cout << firstNumber << " X " << secondNumber;
  cout << " = " << multiplicationResult << endl;
}

int main()
{
  cout << "This program will help multiply two numbers" << endl;
  
  // Call the function that does the work
  MultiplyNumbers();
  
  cout << "Displaying from main(): ";
  
  // This line will now compile and work
  cout << firstNumber << " X " << secondNumber;
  cout << " = " << multiplicationResult << endl;
  
  return 0;
}
