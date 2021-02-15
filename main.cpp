#include <iostream>
#include <ctime>
int main()
{
  char ser;

  std::cout << "Welcome to the coin flip app" << std::endl;
  std::cout << "If you guess correctly you win" << std::endl;
  std::cout << "Do you want to play (y/n)? " << std::endl;
  std::cin >> ser;

  char guess;
  int num = rand() % 2;
  int bank = 10, heads = 0, tails = 1;

  while(ser == 'y')
  {
    std::cout << "You bank is $" << bank << std::endl;
    std::cout << "Enter heads or tails (h/t)" << std::endl;

    num = rand() % 2;

    if (num == heads)
    {
      std::cout << "Winner, the coin flip came up heads" << std::endl;
      bank += 2.00;
      std::cout << "Your bank is $" << bank << std:endl;
      std::cout << "Do you want to play again (h/t)" << std::endl;
    }
    if (num == tails)
    {
      std::cout << "Sorry, you loose. The coin flip came up tails." << std::endl;
      std::cout << "Do you want to play again (y/n)" << std::endl;
      std::cin >> ser;
    }
    if (guess != num)
    {
      bank++;
      std::cout << "Your bank is $" << bank << std::endl;
    }
    else if (guess == num)
    {
      bank--;
      std::cout << "Your bank is $" << bank << std::endl;
    }
  }
  return 0;
}