#pragma once
#include <string>

class FBullCowGame{

public:
  FBullCowGame();  // Constructor

  int GetMaxTries() const;
  int GetCurrentTry() const;
  bool isGameWon() const;

  void Reset();  // TODO make more rich return
  bool CheckGuessValidity(std::string); // TODO make more rich return

private:
  int MyCurrentTry;
  int MyMaxTries;

};
