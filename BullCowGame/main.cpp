#include <iostream>
#include <string>
#include "fbullcowgame.h"

void PrintIntro();
std::string GetGuess();
void PlayGame();
bool AskToPlayAgain();

FBullCowGame BCGame;

int main() {

  do {
    std::cout << std::endl;
    PrintIntro();
    PlayGame();
  } while (AskToPlayAgain() == 1);

  return 0;
}

void PrintIntro() {
  // introduce the game
  constexpr int WORD_LENGTH = 5;
  std::cout << "Welcome to Bulls and Cows, a fun word game." << std::endl;
  std::cout << "Can you guess the " << WORD_LENGTH;
  std::cout << " letter word I'm thinking of?\n\n";
  return;
}

void PlayGame() {
  BCGame.Reset();
  int MaxTries = BCGame.GetMaxTries();

  // loop for a number of guesses
  for (int i = 0; i < MaxTries; ++i) {
    std::cout << "your guess was: " << GetGuess() << std::endl; // TODO make loop checking validity
    std::cout << std::endl;
  }

  // TODO sumarize game
}

std::string GetGuess() {
  int CurrentTry = BCGame.GetCurrentTry();
  // get a guess from the player
  std::string Guess = "";
  std::cout << "Try " << CurrentTry << ". Enter your guess: ";

  // get player input
  getline(std::cin, Guess);

  return Guess;
}

bool AskToPlayAgain() {
  std::cout << "Do you want to play again?: ";
  std::string Response = "";
  getline(std::cin, Response);

  return (Response[0] == 'y' || Response[0] == 'Y');
}
