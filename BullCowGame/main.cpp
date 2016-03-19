#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
string GetGuess();
void PlayGame();
bool AskToPlayAgain();

int main() {

  do {
    cout << endl;
    PrintIntro();
    PlayGame();
  } while (AskToPlayAgain() == 1);

  return 0;
}

void PrintIntro() {
  // introduce the game
  constexpr int WORD_LENGTH = 5;
  cout << "Welcome to Bulls and Cows, a fun word game." << endl;
  cout << "Can you guess the " << WORD_LENGTH;
  cout << " letter word I'm thinking of?\n\n";
  return;
}

void PlayGame() {
  // loop for a number of guesses
  constexpr int NUM_TURNS = 5;
  for (int i = 0; i < NUM_TURNS; ++i) {
    cout << "your guess was: " << GetGuess() << endl;
    cout << endl;
  }
}

string GetGuess() {
  // get a guess from the player
  string Guess = "";
  cout << "Enter your guess: ";

  // get player input
  getline(cin, Guess);

  return Guess;
}

bool AskToPlayAgain() {
  cout << "Do you want to play again?: ";
  string Response = "";
  getline(cin, Response);

  return (Response[0] == 'y' || Response[0] == 'Y');
}
