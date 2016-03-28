#include "fbullcowgame.h"

FBullCowGame::FBullCowGame()
{
  Reset();
}

int FBullCowGame::GetMaxTries() const{return MyMaxTries;}
int FBullCowGame::GetCurrentTry() const{return MyCurrentTry;}

void FBullCowGame::Reset()
{
  constexpr int MAX_TRIES = 8;
  MyMaxTries = MAX_TRIES;

  MyCurrentTry = 1;
  return;
}

bool FBullCowGame::isGameWon() const
{
  return false;
}

bool FBullCowGame::CheckGuessValidity(std::string)
{
  return false;
}
