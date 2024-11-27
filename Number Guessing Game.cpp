#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    //For the time() function

int main()
{
  srand(static_cast<unsigned int>(time(0)));  // Initializing random seed

  int secretNumber = rand() % 100 + 1;   // Generating a random number between 1 and 100
  int guess = 0;

  std::cout << "*-----------------------------------------*" << std::endl;
  std::cout << "I have chosen a number between 1 and 100." << std::endl;
  std::cout << "Can you guess what the number is?" << std::endl;
  std::cout << "*-----------------------------------------*" << std::endl << std::endl;

  while (guess != secretNumber)
  {
      std::cout << "Enter your guess: ";
      std::cin >> guess;

      if (guess > secretNumber)
      {
          std::cout << "Too high! Try again." << std::endl;
      }
      else if (guess < secretNumber)
      {
          std::cout << "Too low! Try again." << std::endl;
      }
      else
      {
          std::cout << "Congratulations! You guessed my number!" << std::endl;
      }
  }

  return 0;
}
