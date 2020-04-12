/* 
SPACE TRAVELER by Arda Çebi (@ardacebi)

Someone is travelling from planet Earth to six potential other planets in our solar system. 
This program requests the person's weight on planet Earth, and then calculates their weight on the other planets.

The program does this by:
1. Asking the person their weight on planet Earth
2. Asking the person which planet they want to travel
3. After receiving those information, it multiplies the person's weight with the gravitational force of that planet to calculate their weight on those planets.
*/

#include <iostream>

int main()
{

  double weight;   // This is the person's weight on Earth
  int destination; // This is the destination
  int new_weight;  // This is a variable that is going to be declared after the questions as the new weight on the new planet

  std::cout << "What is your weight on planet Earth?\n"; // Asks the user on how much does the person weighs on Earth
  std::cin >> weight;

  std::cout << "\nYou can visit these planets:\n\n"; // Informs the user of the available planets
  std::cout << "   1. Venus   2. Mars    3. Jupiter\n";
  std::cout << "   4. Saturn  5. Uranus  6. Neptune\n\n";

  std::cout << "Which planet will you be visiting? "; // Asks the user which planet will the person will visit
  std::cin >> destination;

  if (destination == 1) // If statement which calculates the person's weight based on user's planet selection
  {
    new_weight = weight * 0.78; // Venus' relative gravity

    std::cout << "Your weight on Venus will be " << new_weight << "\n";
    std::cout << "Good luck!";
  }
  else if (destination == 2)
  {
    new_weight = weight * 0.39; // Mars' relative gravity

    std::cout << "Your weight on Mars will be " << new_weight << "\n";
    std::cout << "Good luck!";
  }
  else if (destination == 3)
  {
    new_weight = weight * 2.65; // Jupiter's relative gravity

    std::cout << "Your weight on Jupiter will be " << new_weight << "\n";
    std::cout << "Good luck!";
  }
  else if (destination == 4)
  {
    new_weight = weight * 1.17; // Saturn's relative gravity

    std::cout << "Your weight on Saturn will be " << new_weight << "\n";
    std::cout << "Good luck!";
  }
  else if (destination == 5)
  {
    new_weight = weight * 1.05; // Uranus' relative gravity

    std::cout << "Your weight on Uranus will be " << new_weight << "\n";
    std::cout << "Good luck!";
  }
  else if (destination == 6)
  {
    new_weight = weight * 1.23; // Neptune's relative gravity

    std::cout << "Your weight on Neptune will be " << new_weight << "\n";
    std::cout << "Good luck!";
  }
