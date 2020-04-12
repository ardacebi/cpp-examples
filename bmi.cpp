/* 
BMI CALCULATOR by Arda Çebi (@ardacebi)

Body mass index (BMI) is a value derived from the mass and height of a person. The BMI is defined as the body mass divided by the square of the body height.

This program calculates the BMI of a person by:
1. Asking them their height in metres (m)
2. Asking them their weight in kilograms (kg)
3. Calculating their BMI with the formula weight / (height * height).
*/

#include <iostream>

int main()
{

  double height, weight, bmi; // Declares variables without initial data

  std::cout << "Type in your height (m): "; // Requests the user to input their height
  std::cin >> height;

  std::cout << "Type in your weight (kg): "; // Requests the user to input their weight
  std::cin >> weight;

  bmi = weight / (height * height); // Updates the bmi variable using the inputted information by the user and the BMI calculation formula

  std::cout << "Your body mass index (BMI) is: " << bmi << "\n"; // Outputs the final calculation

  return 0;
}