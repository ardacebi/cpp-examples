/* 
TEMPERATURE CONVERTER by Arda Çebi (@ardacebi)

This program converts Fahrenheit to Celsius and vice versa based on user selection.

The program does this by:
1. Asking the user what they want to convert to and from (Fahrenheit to Celsius or Celsius to Fahrenheit)
2. Asking the user to input the temperature value
3. Outputting the final calculated value.
*/

#include <iostream>

int main()
{

  double tempselection; // Declare variables without data to be used later
  double tempf;
  double tempc;

  std::cout << "What kind of conversion would you like to do?";
  std::cout << "\n1. Fahrenheit to Celsius\n\n";
  std::cout << "\n2. Celsius to Fahrenheit\n\n";

  std::cin >> tempselection;

  if (tempselection == 1)
  {
    std::cout << "Enter the temperature in Fahrenheit: "; // Ask the user to input a temperature in Fahrenheit
    std::cin >> tempf;

    tempc = (tempf - 32) / 1.8; // Calculate Celsius from Fahrenheit with it's formula.

    std::cout << "The temp is " << tempc << " degrees Celsius.\n"; // Output calculated Celsius value.
  }
  else if (tempselection == 2)
  {
    std::cout << "Enter the temperature in Celsius: "; // Ask the user to input a temperature in Celsius
    std::cin >> tempc;

    tempf = (tempc * 1.8) + 32; // Calculate Fahrenheit from Celsius with it's formula.

    
    std::cout << "The temp is " << tempf << " degrees Fahrenheit.\n"; // Output calculated Fahrenheit value.
  }
}