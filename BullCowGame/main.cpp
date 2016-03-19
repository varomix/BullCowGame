#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
string GetGuess();

int main() {

  PrintIntro();

  // loop for a number of guesses
  constexpr int NUM_TURNS = 5;
  for (int i = 0; i < NUM_TURNS; ++i) {
    GetGuess();
  }

  cout << endl;
  return 0;
}

void PrintIntro() {
  // introduce the game
  constexpr int WORD_LENGTH = 5;
  cout << "Welcome to Bulls and Cows, a fun word game." << endl;
  cout << "Can you guess the " << WORD_LENGTH;
  cout << " letter word I'm thinking of?\n\n";
  cout << endl;
  return;
}

string GetGuess() {
  // get a guess from the player
  string Guess = "";
  cout << "Enter your guess: ";

  // get player input
  getline(cin, Guess);

  cout << "your guess was: " << Guess << endl<<endl;

  return Guess;
}
