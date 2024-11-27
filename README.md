# C++ project 
## Project-01: Number Guessing Game

  - **`#include <cstdlib>` and `#include <ctime>`**: These libraries are included to use the `rand()`, `srand()`, and `time()` functions.  
  - **`srand(static_cast<unsigned int>(time(0)));`**: Initializes the random number generator with the current time as the seed value, ensuring a unique sequence of random numbers for each program run.  
  - **`int secretNumber = rand() % 100 + 1;`**: Generates a random number between 1 and 100 (inclusive).  
  - **`while` loop**: Repeats execution until the user correctly guesses the secret number.  
  - **Loop body**: The program takes the user's guess, compares it to the secret number, and gives feedback on whether the guess is too high or too low.  
